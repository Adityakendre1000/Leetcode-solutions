class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int left = 1;
        int n = nums.size();
        int right = 0;
        for(int num:nums){
            right = max(right,num);
        }
        int mid;
        
        while(left <= right){
            mid = left + (right-left)/2;
            long long total = 0;
            
            for(int num:nums){
                total = total + (num+mid-1)/mid;
            }
            
            if(total <= threshold) right = mid-1;
            else left = mid + 1;
            
        }
        return left;
    }
};