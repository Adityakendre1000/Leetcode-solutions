class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int rows=grid.size();
        int columns=grid[0].size();

        int x2=-1;
        int x1=columns+1;
        int y2=-1;
        int y1=rows+1;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                if(grid[i][j] == 1){
                    if(x1>i) x1=i;
                    if(x2<i) x2=i;
                    if(y1>j) y1=j;
                    if(y2<j) y2=j;
                }
            }
        }
        int a = x2-x1+1;
        int b = y2-y1+1;
        return a*b;

    }
};