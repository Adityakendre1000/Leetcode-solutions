class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = -1;
        int lrange = -1;
        int rrange = -1;
        
        while(left <= right){
            mid = left + (right-left)/2;
            
            if(nums[mid] == target){
                lrange = mid;
                rrange = mid;
                break;
            }
            else if(nums[mid] > target) right = mid-1;
            else left = mid +1;
        }
        if (mid != -1){
            for(int i = mid-1; i >= 0; --i){
                if(nums[i] == target) lrange = min(lrange,i);
                else break;
            }

            for(int i = mid+1; i < nums.size(); ++i){
                if(nums[i] == target) rrange = max(rrange,i);
                else break;
            }
        }
        
        return {lrange,rrange};
    }
};