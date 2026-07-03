#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            // Search for the current element (*it) in the rest of the vector
            if (std::find(std::next(it), nums.end(), *it) != nums.end()) {
                return true; // Found a match!
            }
        }
        return false;
    }
};