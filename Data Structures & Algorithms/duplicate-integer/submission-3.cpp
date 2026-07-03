#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return std::adjacent_find(nums.begin(), nums.end()) != nums.end();;
    }
};