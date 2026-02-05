class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = n-1;

        k = k % n;

        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }

        for(int i = 0; i < (k/2); i++){
            int j = k-i-1;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }

        int j = n-1;
        for(int i = k; i < ((n+k)/2); i++){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
};