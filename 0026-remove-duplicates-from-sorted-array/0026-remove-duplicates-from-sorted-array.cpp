class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        
        for(int num:nums){
            mpp[num]++;
        }
        
        int count = 0;
        
        for(const auto& [num,freq] : mpp){
            nums[count] = num;
            count++;
        }
        return mpp.size();
    }
};