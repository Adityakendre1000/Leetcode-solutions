class Solution {
public:
    string removeOuterParentheses(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string result;
        int balance = 0;
        
        for(char c : s){
            if(c == '('){
                if(balance > 0){
                    result += c;
                }
                ++balance;
            }
            else{
                --balance;
                if(balance > 0){
                    result += c;
                }
            }
        }
        return result;
    }
};