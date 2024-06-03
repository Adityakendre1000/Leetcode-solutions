class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxalt = 0;
        int lastalt = 0;
        
        for(int i = 0; i < gain.size(); ++i){
            lastalt += gain[i];
            maxalt = max(maxalt,lastalt);
        }
        return maxalt;
    }
};