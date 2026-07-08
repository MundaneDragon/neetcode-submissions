class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        auto hashmap = std::unordered_map<int,int>{};
        for (auto i = 0; i < nums.size(); i++) {
            auto first_value = nums[i];
            auto second_value = target - first_value;
            if (hashmap.contains(second_value)) {
                auto j = hashmap[second_value];
                return {j,i};
            }

            hashmap.emplace(first_value, i);

        }
        
    }
};
