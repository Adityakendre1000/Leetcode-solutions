class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> result(n,vector<int>(n, 0));

        for(int i = 0; i <n ; i++){
            int x = n-1-i;
            int y = 0;
            vector<int> temp1;
            for(int j = 0; j < i+1; j++){
                temp1.push_back(grid[x][y]);
                x++;
                y++;
            }
            sort(temp1.begin(), temp1.end());
            reverse(temp1.begin(), temp1.end());

            x = n-1-i;
            y = 0;
            for(int j = 0; j < i+1; j++){
                result[x][y] = temp1[j];
                x++;
                y++;
            }
        }

        for(int i = 1; i < n ; i++){
            int x = 0;
            int y = i;
            vector<int> temp1;
            for(int j = n-i; j > 0; j--){
                temp1.push_back(grid[x][y]);
                x++;
                y++;
            }
            sort(temp1.begin(), temp1.end());

            x = 0;
            y = i;
            for(int j = n-i; j > 0; j--){
                result[x][y] = temp1[n-i-j];
                x++;
                y++;
            }
        }

        return result;
    }
};