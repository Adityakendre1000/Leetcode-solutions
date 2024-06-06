class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        // if(nums.size() == 1) return 0;
        // else if(nums.size() == 2){
        //     if (nums[0] > nums[1]) return 0;
        //     else return 1;
        // }
        // else if(nums[0] > nums[1]) return 0;
        // else if(nums[nums.size()-1] > nums[nums.size()-2]) return nums.size()-1;
        // for(int i = 1; i < nums.size()-1; ++i){
        //     if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
        // }
        // return -1;
        
        int low=0, high=nums.size()-1;
        int n=nums.size();
       while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || nums[mid - 1] <= nums[mid]) &&
				(mid == n - 1 || nums[mid + 1] <= nums[mid]))
				return mid;
			if(mid > 0 && nums[mid - 1] >= nums[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	return -1;
    }
};