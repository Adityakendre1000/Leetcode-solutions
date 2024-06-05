class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.empty()) return{};
        
        vector<vector<int>> result;
        
        sort(intervals.begin(),intervals.end());
        
        
        
        result.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); ++i){
            vector<int>& lastinterval = result.back();
            
            if(lastinterval[1] >= intervals[i][0]){
                lastinterval[1] = max(lastinterval[1], intervals[i][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};