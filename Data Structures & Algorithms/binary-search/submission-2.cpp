class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = std::ranges::lower_bound(nums, target);

        // Check if we found the target
        if (it != nums.end() && *it == target) {
            return static_cast<int>(std::distance(nums.begin(), it));
        }

        return -1;
    }
};
