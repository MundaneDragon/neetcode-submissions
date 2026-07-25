class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto l = 0;
        auto r = 1;
        auto maxProfit = 0;

        while (r < prices.size()) {
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
