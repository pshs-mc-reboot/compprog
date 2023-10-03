#include <bits/stdc++.h>

int solve(const int& k) {
    if (!(k % 2) || !(k % 5)) {
        return -1;
    }

    int answer{1};
    int current{7 % k};

    while (current) {
        current = current * 10 + 7;
        current %= k;
        answer++;
    }

    return answer;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k; std::cin >> k;

    std::cout << solve(k) << '\n';
}
