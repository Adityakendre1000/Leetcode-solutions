class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> c;
        
        for(int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(c.find(complement) != c.end()){
                return {c[complement],i};
            }
            
            c[nums[i]] = i;
        }
        return {};     
    }
};