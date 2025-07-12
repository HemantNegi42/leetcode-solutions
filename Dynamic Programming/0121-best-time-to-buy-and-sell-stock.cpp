class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int mini = prices[0];
        for (int i = 0; i < n; i++) {
            if (prices[i] < mini)
                mini = prices[i];
            profit = max(profit, prices[i] - mini);
        }
        return profit;
    }
};
