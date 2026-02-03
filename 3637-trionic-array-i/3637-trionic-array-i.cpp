class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(i=0; i<(n-1) && nums[i]<nums[i+1]; ++i){}
        if(i==0) return false;
        int p = i;

        for(; i<(n-1) && nums[i]>nums[i+1]; ++i){}
        if(p == i) return false;
        int q = i;

        for(; i<(n-1) && nums[i]<nums[i+1]; ++i){}
        if(q == i) return false;
        // if(i<(n-2) && (nums[i]>nums[i+1] && nums[n-1]>nums[n-2])) i=i+n;

        return (i+1)==n;
    }
};