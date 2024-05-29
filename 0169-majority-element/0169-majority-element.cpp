class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> majority;
        int count = 0;
        int condition = nums.size() >> 1;
        
        for (int num : nums) {
            majority[num]++;
        }
        
        for (const auto& [num,freq] : majority){
            if(freq > condition){
                return num;
            }
        }
        return -1;
    }
};