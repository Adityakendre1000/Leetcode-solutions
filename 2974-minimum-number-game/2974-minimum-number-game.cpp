class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        vector<int> result;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size()-1; i += 2){
            result.push_back(nums[i+1]);
            result.push_back(nums[i]);
        }
        return result;
    }
};