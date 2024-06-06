class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        int left = 1;
        int right = nums.size()-2;
        
        if(nums.size() == 1) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if (nums[right] != nums[right + 1]) return nums[right + 1];
        
        while(left <= right){
            int mid = left + (right-left)/2;
            
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            else if((mid % 2 == 0 && nums[mid+1] == nums[mid]) || (mid % 2 == 1 && nums[mid-1] == nums[mid])) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};