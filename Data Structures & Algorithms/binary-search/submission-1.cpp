class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto lower_point = 0;
        auto upper_point = static_cast<int>(nums.size() - 1);

        while (lower_point <= upper_point) {
            auto midpoint = (lower_point + upper_point) / 2;
            if (target < nums[midpoint]) {
                upper_point = midpoint - 1;
            } else if (target > nums[midpoint]) {
                lower_point = midpoint + 1;
            } else {
                return midpoint;
            }
        }

        return -1;
    }
};
