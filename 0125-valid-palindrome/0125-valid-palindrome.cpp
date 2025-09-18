class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(char c:s){
            if(isalnum(c)) x+=tolower(c);
        }

        int i = 0;
        int j = x.length()-1; 
        while(i < j){
            if(x[i]!=x[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};