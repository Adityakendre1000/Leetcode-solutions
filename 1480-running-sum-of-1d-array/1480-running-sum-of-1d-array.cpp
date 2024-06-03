class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        
        int csum = 0;
        
        for(int num : nums){
            csum += num;
            result.push_back(csum);
        }
        return result;
    }
};