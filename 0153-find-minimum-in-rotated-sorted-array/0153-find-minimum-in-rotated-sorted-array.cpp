class Solution {
public:
    int findMin(vector<int>& nums) {
        
        if(nums.empty()) return {};
        else if(nums.size() == 1) return nums[0];
        else if(nums[0] < nums[nums.size()-1]) return nums[0];
        else{
            for(int i = 1; i < nums.size(); ++i){
                if(nums[i] < nums[i-1]) return nums[i];
            }
        }
        return -1;
    }
};