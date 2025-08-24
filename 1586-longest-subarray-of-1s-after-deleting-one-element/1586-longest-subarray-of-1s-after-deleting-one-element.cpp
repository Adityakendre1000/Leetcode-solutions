class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxOnes = 0;
        int prevZero = -1;
        int zeroCount = 0;
        int currOneCount = 0;
        int totalZeros = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]==1) {
                currOneCount++;
            }
            else{
                zeroCount++;
                totalZeros++;
                if(zeroCount == 1){
                    prevZero = i;
                }
                else if(zeroCount == 2){
                    maxOnes = max(currOneCount,maxOnes);
                    currOneCount = 0;
                    zeroCount = 0;
                    i = prevZero;
                }
            }
        }
        maxOnes = max(currOneCount,maxOnes);
        if(totalZeros<2) return (nums.size()-1);
        else return maxOnes;
    }
};