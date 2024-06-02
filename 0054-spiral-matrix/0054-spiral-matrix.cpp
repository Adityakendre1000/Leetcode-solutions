class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;

        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        
        while(top <= bottom && left <= right){
            for(int j = left; j <= right; ++j){
                result.push_back(matrix[top][j]);
            }
            ++top;
            
            for(int j = top; j <= bottom; ++j){
                result.push_back(matrix[j][right]);
            }
            --right;
            
            if(top <= bottom){
                for(int j = right; j >= left; --j){
                    result.push_back(matrix[bottom][j]);
                }
            }
            --bottom;
            
            
            if(left <= right){
                for(int j = bottom; j >=top; --j){
                    result.push_back(matrix[j][left]);
                }
            }
            ++left;
            
        }
        return result;
    }
};