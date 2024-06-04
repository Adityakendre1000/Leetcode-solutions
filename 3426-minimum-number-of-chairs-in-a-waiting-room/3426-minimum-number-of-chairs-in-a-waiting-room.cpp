class Solution {
public:
    int minimumChairs(string s) {
        int minchairs = 0;
        int chairs = 0;

        for(char ch:s){
            if(ch == 'E')++chairs;
            else --chairs;

            minchairs = max(minchairs,chairs);
        }
        return minchairs;
    }
};