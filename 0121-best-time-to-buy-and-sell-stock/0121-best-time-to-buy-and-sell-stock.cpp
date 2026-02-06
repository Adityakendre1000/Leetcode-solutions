class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int mini = INT_MAX;

        for(int price : prices){
            mini = min(mini,price);
            diff = max(diff,price-mini);
        }
        return diff;
    }
};