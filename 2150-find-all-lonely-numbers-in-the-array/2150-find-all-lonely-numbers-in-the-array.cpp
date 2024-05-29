class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int, int> lonely;
        vector<int> result;

        for (int num : nums) {
            lonely[num]++;
        }
        
        for (const auto& [num, freq] : lonely) {
            if (freq == 1 && lonely.find(num + 1) == lonely.end() && lonely.find(num - 1) == lonely.end()) {
                result.push_back(num);
            }
    }
        return result;
    }
};