class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> xz;
        unordered_set<int> yz;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j]==0){
                    xz.insert(i);
                    yz.insert(j);
                }
            }
        }

        for(int i : xz){
            for(int j = 0; j < n; j++){
                matrix[i][j] = 0;
            }
        }

        for(int i = 0; i < m; i++){
            for(int j : yz){
                matrix[i][j]=0;
            }
        }
    }
};