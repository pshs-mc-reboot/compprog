    #include <bits/stdc++.h>
    using lli = long long int;

    const int mod(1e9 + 7);
    const char a{'a'};
    const char b{'b'};

    int solve(const std::string& s) {
        int result{1};
        int count{1};

        for (std::size_t i{}; i < s.size(); ++i) {
            if (s[i] == a) {
                count++;
            } else if (s[i] == b) {
                result = (lli(result) * count) % mod;
                count = 1;
            }
        }

        return ((((lli(result) * count) % mod) + mod) % mod) - 1;
    }

    int main() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        std::string s; std::cin >> s;

        std::cout << solve(s) << '\n';
    }
