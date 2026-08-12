#include <utility>
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        auto prev = 1;
        auto curr = 2;

        for (auto i = 3; i <= n; ++i) {
            prev = std::exchange(curr, curr + prev);
        }

        return curr;
    }
};
