class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_map<char,int> check;
            for(int j = 0; j < 9; j++){
                if(board[i][j]!='.'){
                    check[board[i][j]]++;
                }
            }

            for(auto i : check){
                if(i.second>1) return false;
            }
        }

        for(int i = 0; i < 9; i++){
            unordered_map<char,int> check;
            for(int j = 0; j < 9; j++){
                if(board[j][i]!='.'){
                    check[board[j][i]]++;
                }
            }

            for(auto i : check){
                if(i.second>1) return false;
            }
        }
        int y = 3;
        int x = 3;
        while(y<=9){
            x = 3;
            while(x<=9){
                unordered_map<char,int> check;
                for(int i = y-3; i < y; i++){
                    for(int j = x-3; j < x; j++){
                        if(board[i][j]!='.'){
                            check[board[i][j]]++;
                        }
                    }
                }
                for(auto i : check){
                if(i.second>1) return false;
                }
                x+=3;
            }
            y+=3;

        }
        return true;
    }
};