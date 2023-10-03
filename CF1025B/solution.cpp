#include <bits/stdc++.h>
using lli = long long int;

lli solve(const int& n, const std::vector<std::pair<int, int>>& v) {
    lli answer{};

    for (auto [a, b] : v) {
        answer = std::gcd(lli(a) * b, answer);
    }

    for (auto [a, b] : v) {
        answer = std::gcd(answer, (
            std::gcd(answer, a) > 1 ? a : b
        ));
    }

    return answer == 1 ? -1 : answer;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<std::pair<int, int>> v(n);
    
    for (auto& [a, b] : v) {
        std::cin >> a >> b;
    }

    std::cout << solve(n, v) << '\n';
}
