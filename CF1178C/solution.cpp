#include <bits/stdc++.h>
using lli = long long int;

const int mod{998244353};

lli pow(lli base, lli exponent, const lli mod) {
    base %= mod;

    lli result(1);

    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % mod;
        }

        base = (base * base) % mod;
        exponent >>= 1;
    }

    return (result + mod) % mod;
}

int solve(const int& w, const int& h) {
    return pow(2, w + h, mod);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w; std::cin >> w;
    int h; std::cin >> h;

    std::cout << solve(w, h) << '\n';
}
