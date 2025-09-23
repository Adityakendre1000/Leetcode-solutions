class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int x = mat.size();
        int y = mat[0].size();

        unordered_map<int, vector<int>> mymap;

        for(int i = 0; i < x; i++){
            for(int j =0; j < y; j++){
                mymap[i-j].push_back(mat[i][j]); 
            }
        }

        for(auto &it:mymap){
            sort(it.second.begin(),it.second.end());
        }

        unordered_map<int,int> diag;

        for(int i = 0; i < x; i++){
            for(int j =0; j < y; j++){
                mat[i][j] = mymap[i-j].front();
                mymap[i-j].erase(mymap[i-j].begin());
            }
        }
        return mat;
    }
};