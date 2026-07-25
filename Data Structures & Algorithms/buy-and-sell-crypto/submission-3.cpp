class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto maxProfit = 0;
        auto minBuy = prices.front();

        for (const auto sell : prices) {
            maxProfit = std::max(maxProfit, sell - minBuy);
            minBuy = std::min(minBuy, sell);
        }

        return maxProfit;
    }
};
