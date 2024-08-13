class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        int maxA = 0;
        int a = 0;
        int maxB = 0;
        int b = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(maxA < nums[i]){
                a = i;
                maxA = nums[i];
            }
        }
        
        for(int i = 0; i < nums.size(); ++i){
            if(maxB < nums[i] && a != i){
                b = i;
                maxB = nums[i];
            }
        }
        int k = (maxA-1) * (maxB-1);
        return k;
    }
};