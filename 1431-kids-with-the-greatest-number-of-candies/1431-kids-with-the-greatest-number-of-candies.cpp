class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxcandies = 0;
        
        for(int candy : candies){
            maxcandies = max(maxcandies,candy);
        }
        
        for(int candy : candies){
            if (candy+extraCandies >= maxcandies) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};