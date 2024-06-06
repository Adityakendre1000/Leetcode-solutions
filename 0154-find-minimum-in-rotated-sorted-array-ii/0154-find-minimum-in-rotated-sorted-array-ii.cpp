class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
//         int left = 0;
//         int right = nums.size()-1;
        
//         while(left <= right){
//             int mid = left + (right-left)/2;
            
//             if(nums )
//         }
        
        if(nums.empty()) return {};
        else if(nums.size() == 1) return nums[0];
        else if(nums[0] < nums[nums.size()-1]) return nums[0];
        else{
            for(int i = 1; i < nums.size(); ++i){
                if(nums[i] < nums[i-1]) return nums[i];
            }
        }
        return nums[0];
        
    }
};