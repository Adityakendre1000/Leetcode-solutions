class Solution {
public:
    long long flowerGame(int n, int m) {
        long long nEven = 0;
        long long nOdd = 0;
        long long mEven = 0;
        long long mOdd = 0;

        if(n%2 == 0){
            nEven = n/2;
            nOdd = n/2;
        }
        else{
            nEven = n/2;
            nOdd = (n/2)+1;
        }
        if(m%2 == 0){
            mEven = m/2;
            mOdd = m/2;
        }
        else{
            mEven = m/2;
            mOdd = (m/2)+1;
        }

        long long ans = 1LL * ((nEven*mOdd)+(nOdd*mEven));
        return ans;
    }
};