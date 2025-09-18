class Solution {
public:
    bool isPalindrome(string s) {
        // string x;
        // for(char c:s){
        //     if(isalnum(c)) x+=tolower(c);
        // }

        // int i = 0;
        // int j = x.length()-1; 
        // while(i < j){
        //     if(x[i]!=x[j]) return false;
        //     i++;
        //     j--;
        // }
        // return true;

        int i = 0;
        int m = s.length()-1;
        int j = m;
        while(i<j){
            while(isalnum(s[i])==false && i < m) i++;
            while(isalnum(s[j])==false && j > 0) j--;
            if(tolower(s[i]) != tolower(s[j]) && i <= j) return false;
            i++;
            j--;
        }
        return true;
    }
};