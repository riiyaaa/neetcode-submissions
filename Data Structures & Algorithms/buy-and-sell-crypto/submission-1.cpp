class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r = 0;
        int l = 0;
        int profit = 0;
        int maxProfit = 0;
        int n = prices.size();
        while(r<n-1){
            if(prices[l]>prices[r]){
                l = r;
            }
            r++;
            profit = prices[r] - prices[l];
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
