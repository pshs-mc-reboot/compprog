#include <bits/stdc++.h>
using lli = long long int;

std::vector<bool> get_primes(const lli n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (lli i{2}; i * i <= n; ++i) {
        if (!is_prime[i]) {
            continue;
        }

        for (lli j{i * i}; j <= n; j += i) {
            is_prime[j] = false;
        }
    }

    return is_prime;
}

std::string solve(const int& n, const std::vector<lli>& v) {
    std::vector<bool> is_prime{get_primes(lli(std::ceil(std::sqrt(
        *std::max_element(begin(v), end(v))
    ))))};
    std::stringstream ss;
    auto write_to_stream([&ss](const bool is_prime) {
        ss << (is_prime ? "YES" : "NO") << '\n';
    });

    for (lli x : v) {
        lli sqrt(std::floor(std::sqrt(x)));

        if (sqrt * sqrt != x) {
            write_to_stream(false);
            continue;
        }

        write_to_stream(is_prime[sqrt]);
    }

    return ss.str();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<lli> v(n);

    for (auto& x : v) {
        std::cin >> x;
    }

    std::cout << solve(n, v);
}
