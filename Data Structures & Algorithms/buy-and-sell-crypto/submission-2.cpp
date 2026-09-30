class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r = 0;
        int l = 0;
        int profit = 0;
        int maxProfit = 0;
        int n = prices.size();
        for(int r =0; r<n; r++){
            if(prices[l]>prices[r]){
                l = r;
            }
            
            profit = prices[r] - prices[l];
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
