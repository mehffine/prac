class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int max_profit = 0;
        for(int r=1; r<prices.size(); r++){
            int profit = prices[r]-prices[l];
            if(profit<0){
                l=r;
            }else{
                max_profit = max(max_profit,profit);
            }
        }
        return max_profit;
    }
};
