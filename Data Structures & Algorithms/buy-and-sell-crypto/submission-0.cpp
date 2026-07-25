class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto l = 0;
        auto r = 1;
        auto maxProfit = 0;

        while (r < prices.size()) {
            auto buyPrice = prices[l];
            auto sellPrice = prices[r];

            if (buyPrice <= sellPrice) {
                auto profit = sellPrice - buyPrice;
                maxProfit = std::max(profit, maxProfit);
            } else {
                l = r;
            }
            r++;

        }
        return maxProfit;
    }
};
