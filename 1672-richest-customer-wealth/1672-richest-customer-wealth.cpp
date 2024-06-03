class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum = 0;
        
        for(int i = 0; i < accounts.size(); ++i){
            int currsum = 0;
            for(int j = 0; j < accounts[i].size(); ++j){
                currsum += accounts[i][j];
            }
            
            maxsum = max(maxsum,currsum);
        }
        return maxsum;
    }
};