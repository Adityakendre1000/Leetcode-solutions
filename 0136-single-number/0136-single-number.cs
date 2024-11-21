public class Solution {
    public int SingleNumber(int[] nums) {
         int result = 0;

        // XOR all numbers
        foreach (int num in nums)
        {
            result ^= num;
        }

        return result;
    }
}