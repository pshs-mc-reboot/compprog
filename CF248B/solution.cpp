#include <bits/stdc++.h>
using lli = long long int;

const int product(210);

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

std::string solve(const int& n) {
    if (n < 3) {
        return "-1";
    }

    if (n == 3) {
        return "210";
    }

    std::stringstream ss; ss << product - pow(10, n - 1, product);
    std::string s{}; ss >> s; std::stringstream().swap(ss);

    ss << '1';

    for (std::size_t i{}; i < n - 1 - s.size(); ++i) {
        ss << '0';
    }

    ss << s;

    return ss.str();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;

    std::cout << solve(n) << '\n';
}
