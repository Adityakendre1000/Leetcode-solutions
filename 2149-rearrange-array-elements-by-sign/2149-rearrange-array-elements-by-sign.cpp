class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0;
        int n = 0;
        int x = nums.size();
        vector<int> arranged;

        while(p<x && n<x){
            while(p<x && nums[p]>=0) p++;
            while(n<x && nums[n]<0) n++;
            arranged.push_back(nums[n]);
            arranged.push_back(nums[p]);
            p++;
            n++;
        }

        return arranged;
    }
};