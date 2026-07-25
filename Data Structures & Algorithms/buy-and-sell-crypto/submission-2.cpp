class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto n = prices.size();
        auto l = std::size_t{0};
        auto r = std::size_t{1};
        auto maxProfit = 0;

        while (r < n) {
            if (prices[l] <= prices[r]) {
                maxProfit = std::max(prices[r] - prices[l], maxProfit);
            } else {
                l = r;
            }
            r++;

        }
        return maxProfit;
    }
};
