class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int maxprofit = 0;
        int n = prices.size();
        
        while(j<n){
            
            if(prices[i]==prices[j]) j++;
            
            else if(prices[i] < prices[j]){
                maxprofit = max(maxprofit,(prices[j]-prices[i]));
                j++;
            }
            else{
                i = j;
                j++;
            }
        }
        return maxprofit;
        
    }
};