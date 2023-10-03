#include <bits/stdc++.h>

int solve(const int& n, const std::vector<int>& v) {
    std::vector<int> left(n, v[0]);

    for (int i{1}; i < n; ++i) {
        left[i] = std::gcd(left[i - 1], v[i]);
    }

    std::vector<int> right(n, v.back());

    for (int i{n - 2}; i >= 0; --i) {
        right[i] = std::gcd(right[i + 1], v[i]);
    }

    int solution{std::max(left[n - 2], right[1])};

    for (int i{1}; i < n - 1; ++i) {
        solution = std::max(solution, std::gcd(left[i - 1], right[i + 1]));
    }

    return solution;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> v(n);

    for (int& x : v) {
        std::cin >> x;
    }

    std::cout << solve(n, v) << '\n';
}
