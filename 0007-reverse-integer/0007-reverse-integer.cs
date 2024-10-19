public class Solution {
    public int Reverse(int x) {
        int Last_dig = 0;
        int rev = 0;

        if (x == Int32.MinValue) return 0;

        int absX = Math.Abs(x);
        
        while (absX != 0) {
            Last_dig = absX % 10;
            absX /= 10;

            if (rev > (Int32.MaxValue - Last_dig) / 10) {
                return 0;
            }

            rev = rev * 10 + Last_dig;
        }

        return x < 0 ? -rev : rev;
    }
}
