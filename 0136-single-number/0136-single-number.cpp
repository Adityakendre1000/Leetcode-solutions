class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> single;
        
        for(int num:nums){
            single[num]++;
        }
        
        for(const auto& [num,freq]:single){
            if(freq == 1){
                return num;
            }
        }
        return -1;
    }
};