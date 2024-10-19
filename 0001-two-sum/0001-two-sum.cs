public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> twosum = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            int complement = target - nums[i];
            
            if (twosum.ContainsKey(complement)) {
                return new int[] { twosum[complement], i };
            }

            if (!twosum.ContainsKey(nums[i])) {
                twosum.Add(nums[i], i);
            }
        }
        
        throw new ArgumentException("No two sum solution");
    }
}
