class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        unordered_set<int> myMap;
        for(int num:nums){
            myMap.insert(num);
        }
        while(myMap.find(original) != myMap.end()) original*=2;

        return original;

    }
};