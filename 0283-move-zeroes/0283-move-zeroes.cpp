class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++){
            if(nums[i] == 0 && nums[j] != 0){
                nums[i] = nums[j];
                nums[j] = 0;
            }
            if(nums[i] != 0){
                i++;
            }
        }
    }
};