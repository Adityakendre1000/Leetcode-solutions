class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        bool f = false;
        int n = nums.size();

        for(int i = 0; i < n; ++i){
            if((nums[i] == 0 && !f) || (nums[i] == 1 && f)){
                ++count;
                f = !f;
            } 
        }
        return count;

    }
};