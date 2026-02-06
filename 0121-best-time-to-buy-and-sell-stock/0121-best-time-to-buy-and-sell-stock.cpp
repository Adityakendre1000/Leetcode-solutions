class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int diff = 0;
        // int mini = INT_MAX;

        // for(int price : prices){
        //     mini = min(mini,price);
        //     diff = max(diff,price-mini);
        // }
        // return diff;

        int l = 0;
        int r = 1;
        int maxProfit = 0;

        for(int i = 0; r < prices.size(); i++){
            if(prices[l] < prices[r]){
                maxProfit = max(maxProfit,(prices[r] - prices[l]));
            }
            else{
                l=r;
            }
            r++;
        }

        return maxProfit;
    }
};