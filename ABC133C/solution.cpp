#include <bits/stdc++.h>

const int mod{2019};

template <typename type>
type modulo(type n, const type& m) {
    return ((n % m) + m) % m;
}

int solve(const int& l, const int& r) {
    int result{mod};

    for (int i{l}; i < r && result; ++i) {
        for (int j{i + 1}; j <= r && result; ++j) {
            result = std::min(result, modulo(i * j, mod));
        }
    }

    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int l; std::cin >> l;
    int r; std::cin >> r;

    std::cout << solve(l, r) << '\n';
}
