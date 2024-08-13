class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        if(nums.size() < 3) return nums.size();
        
        int a = 2;
        
        for(int i = 2; i < nums.size(); ++i){
            if(nums[i] != nums[a-2]){
                nums[a] = nums[i];
                ++a;
            }
        }
        return a;
    }
};