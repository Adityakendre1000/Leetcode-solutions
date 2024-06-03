class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else if (x == 0) return true;
        
        int orignalx = x;
        long long reversed = 0;
        
        while(x!=0){
            int lastdig = x%10;
            x = x/10;
            reversed = reversed*10 + lastdig;
        }
        
        if(orignalx == reversed) return true;
        else return false;
    }
};