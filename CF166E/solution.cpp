#include <bits/stdc++.h>
using lli = long long int;
using ull = unsigned long long int;

const lli mod(1e9 + 7);

template <typename type>
type modulo(type n, const type& m) {
    return ((n % m) + m) % m;
}

lli pow(ull base, ull exponent, const ull mod) {
    base = modulo(base, mod);

    ull result(1);

    while (exponent > 0) {
        if (exponent & 1) {
            result = modulo(result, mod);
            result = modulo(result * base, mod);
        }

        base = modulo(base * base, mod);
        exponent >>= 1;
    }

    return modulo(result, mod);
}

int solve(const int& n) {
    lli a(pow(3, n, 4 * mod));
    lli b(3 * std::pow(-1, n));

    return modulo((a + b) / 4, mod);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;

    std::cout << solve(n) << '\n';
}
