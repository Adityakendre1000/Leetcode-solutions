class Solution {
public:

    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int maxArea = -1;
        int maxDiagonal = -1;

        for(int i = 0; i < n; i++){
            int x = dimensions[i][0];
            int y = dimensions[i][1];
            int currDiagonal = (x*x)+(y*y);
            int currArea =x*y;
            if(maxDiagonal < currDiagonal){
                maxDiagonal = currDiagonal;
                maxArea = currArea;
            }
            else if(maxDiagonal == currDiagonal){
                maxArea = max(currArea,maxArea);
            }
        }
        return maxArea;
    }
};