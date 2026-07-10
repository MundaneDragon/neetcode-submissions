class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto product = 1;
        auto numZero = 0;
        for (auto const& num : nums) {
   
            if (num != 0) {
                product = product * num;
            } else {
                numZero++;
            }

            if (numZero > 1) {
                return std::vector<int>(nums.size(),0);
            }
        }

        auto result = std::vector<int>{};

        for (auto const& num : nums) {
            if (numZero == 1 && num != 0) {
                result.emplace_back(0);
            } else if (num == 0){
                result.emplace_back(product);
            } else {
                result.emplace_back(product / num);
            }
        }


        return result;
    }
};
