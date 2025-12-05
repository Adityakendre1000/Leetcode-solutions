class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tsum = 0;
        int count = 0;

        for(int num: nums) tsum+=num;

        int csum = 0;

        for(int i = 0;i < nums.size()-1;i++){
            csum+=nums[i];
            if((csum - (tsum-csum))%2==0) count++;
        }

        return count;
    }
};