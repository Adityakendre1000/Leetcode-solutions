class Solution {
public:
    string largestOddNumber(string num) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        int i = num.size()-1;
        
        for(; i >= 0; --i){
            int s = num[i] - 0;
            if(s % 2 != 0){
                break;
            }
        }
        num.resize(i+1);
        return num;
    }
};