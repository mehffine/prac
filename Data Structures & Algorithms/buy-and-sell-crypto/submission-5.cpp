class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_profit = 0;
        for(int i=1; i<prices.size(); i++){
            int profit = prices[i]-buy;
            if(buy>prices[i]){
                buy=prices[i];
            }else{
                max_profit = max(max_profit,profit);
            }
        }
        return max_profit;
    }
};
