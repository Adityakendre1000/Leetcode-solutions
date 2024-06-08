class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                ++digits[i];
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};