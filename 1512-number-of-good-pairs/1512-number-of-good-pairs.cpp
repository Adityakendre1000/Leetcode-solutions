class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> gpairs;
        int count = 0;
        
        for(int num : nums){
            gpairs[num]++;
        }
        
        for(auto const& [num,freq] : gpairs){
            int s = freq-1;
            int n = (s*(s+1))/2;
            count += n;
        }
        return count;
    }
};