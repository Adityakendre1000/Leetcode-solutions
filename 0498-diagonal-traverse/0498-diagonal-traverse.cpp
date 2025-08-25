class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;

        for(int i = 0; i < m+n-1; i++){
            if(i%2==0){
                int x = min(i,m-1);
                int y = i-x;

                while(x >= 0 && y < n){
                    result.push_back(mat[x][y]);
                    x--;
                    y++;
                }
            }
            else{
                int y = min(i,n-1);
                int x = i-y;

                while(x < m && y >=0){
                    result.push_back(mat[x][y]);
                    x++;
                    y--;
                }
            }
        }
        return result;
    }
};