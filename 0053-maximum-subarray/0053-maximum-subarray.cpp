class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int cSum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            cSum = max(nums[i], cSum+nums[i]);
            maxSum = max(maxSum,cSum);
        }

        return maxSum;
    }
};