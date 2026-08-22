#include <algorithm>

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        auto prev2 = 0;
        auto prev1 = 0;

        for (auto i = 2; i <= cost.size(); i++) {
            auto current = std::min(prev1 + cost[i-1], prev2 + cost[i-2]);
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};
