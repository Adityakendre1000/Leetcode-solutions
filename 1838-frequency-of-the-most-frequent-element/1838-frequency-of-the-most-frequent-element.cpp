class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        int left = 0;
        long long total = 0;
        
        int maxfreq = 0;
        
        for(int right = 0; right < nums.size(); right++){
            total += nums[right];
            
            while((long long)nums[right]*(right-left+1) > total+k){
                total -= nums[left];
                left++;
            }
            maxfreq = max(maxfreq,(right-left+1));
        }
        
        return maxfreq;
        
    }
};