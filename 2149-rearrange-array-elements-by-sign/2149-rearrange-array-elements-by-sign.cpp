class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> result;
        
        for (int num : nums){
            if(num >= 0) positive.push_back(num);
            else negative.push_back(num);
        }
        
        for (int i = 0; i < positive.size(); i++){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        return result;
    }
};
