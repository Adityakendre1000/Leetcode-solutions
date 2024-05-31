class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        long long total = (n*(n+1))/2;
        
        for(int i = 0; i < n; i++){
            sum+=nums[i];
        }
        
        return total - sum;
    }
};