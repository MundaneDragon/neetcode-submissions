class Solution {
public:
    int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    auto dp = std::vector<int>{0, 1, 2};
    dp.reserve(static_cast<std::size_t>(n + 1));

    for (auto i = 3; i <= n; ++i) {
        dp.push_back(dp[static_cast<std::size_t>(i - 1)] + dp[static_cast<std::size_t>(i - 2)]);
    }

    return dp.back();
    }
};
