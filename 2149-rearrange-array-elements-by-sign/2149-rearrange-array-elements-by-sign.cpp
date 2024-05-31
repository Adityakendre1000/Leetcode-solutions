class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> result;
        
        int i = 0;
        
        for (int num : nums){
            if(num >= 0) positive.push_back(num);
            else negative.push_back(num);
        }
        
        int n = positive.size();
        
        while(n--){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
            i++;
        }
        return result;
    }
};