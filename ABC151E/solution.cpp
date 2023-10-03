#include <bits/stdc++.h>
using lli = long long int;

const lli mod(1e9 + 7);
const int max(1e5);

template <typename type>
type modulo(type n, const type& m) {
    return ((n % m) + m) % m;
}

class combination {
    public:
        combination() : n{}, mod{}, modular_inverse{}, factorial{}, factorial_inverse{} {}
        combination(const int n, const lli& mod) : n{n}, mod{mod}, modular_inverse(n + 1, 0), factorial(n + 1, 1), factorial_inverse(n + 1, 1) {
            modular_inverse[1] = 1;

            for (lli i(2); i <= n; ++i) {
                modular_inverse[i] = mod - modulo(
                    mod / i * modular_inverse[modulo(mod, i)], mod
                );
            }

            for (lli i(1); i <= n; ++i) {
                factorial[i] = modulo(factorial[i - 1] * i, mod);
                factorial_inverse[i] = modulo(factorial_inverse[i - 1] * modular_inverse[i], mod);
            }
        }

        lli operator ()(const int n, const int r) {
            if (r < 0 || n < r) {
                return 0LL;
            }

            return modulo((
                    modulo(factorial[n] * factorial_inverse[r], mod) * factorial_inverse[n - r]
                ), mod
            );
        }
    private:
        lli n;
        lli mod;
        std::vector<lli> modular_inverse;
        std::vector<lli> factorial;
        std::vector<lli> factorial_inverse;
};

int solve(const int& n, const int& k, std::vector<int>& v) {
    std::sort(begin(v), end(v));

    lli answer{};
    combination comb(max + 1, mod);

    for (int i{}; i <= n - k; ++i) {
        lli ncr{comb(n - i - 1, k - 1)};

        answer += modulo(v[n - 1 - i] * ncr, mod);
        answer -= modulo(v[i] * ncr, mod);
        answer = modulo(answer, mod);
    }

    return answer;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    int k; std::cin >> k;
    std::vector<int> v(n);

    for (int& x : v) {
        std::cin >> x;
    }

    std::cout << solve(n, k, v) << '\n';
}
