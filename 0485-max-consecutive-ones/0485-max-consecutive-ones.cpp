class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;

        for(int n : nums){
            if(n!=1){
                maxCount = max(count,maxCount);
                count = 0;
            }else{
                count++;
            }
           
        }
        maxCount = max(count,maxCount);
        return maxCount;
    }
};