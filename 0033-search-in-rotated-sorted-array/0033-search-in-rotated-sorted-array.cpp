class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size()-1;
        
        
//         while(left <= right){
//             int mid = left + (right-left)/2;
            
//             if(nums[mid] == target) return mid;
//             else if(nums[left] <= nums[mid]){
//                 if(nums[left] == target) return left;
//                 else if(nums[left] < target && target < nums[mid]) right = mid-1;
//                 else left = mid+1;
//             }
//             else{
//                 if(nums[right] == target) return right;
//                 else if(nums[mid+1] == target) return mid+1;
//                 else if(nums[mid+1] < target && target < nums[right]) left = mid+1;
//                 else right = mid-1;
//             }
//         }
//     return -1;
        
        int low = 0;
        int high = nums.size()-1;
        
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};