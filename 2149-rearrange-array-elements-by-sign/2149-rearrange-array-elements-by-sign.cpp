class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int p = 0;
        // int n = 0;
        // int x = nums.size();
        // vector<int> arranged;

        // while(p<x && n<x){
        //     while(p<x && nums[p]>=0) p++;
        //     while(n<x && nums[n]<0) n++;
        //     arranged.push_back(nums[n]);
        //     arranged.push_back(nums[p]);
        //     p++;
        //     n++;
        // }

        // return arranged;

        int n = nums.size();
        vector<int> res(n);

        int pos = 0;
        int neg = 1;
        
        for(int n : nums){
            if(n>-1){
                res[pos] = n;
                pos+=2;
            } else{
                res[neg] = n;
                neg+=2;
            }
        }
        return res;
    }
};