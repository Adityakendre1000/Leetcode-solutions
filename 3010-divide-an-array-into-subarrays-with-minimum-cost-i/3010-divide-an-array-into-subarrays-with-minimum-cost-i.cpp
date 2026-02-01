class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a,b,c;

        int n = nums.size();

        a = nums[0];

        int min = 51;
        int x;

        for(int i = 1; i < n; i++){
            if(nums[i]<min){
                min=nums[i];
                x=i;
            }
        }

        b = min;

        min = 51;

        for(int i = 1; i < n; i++){
            if(nums[i]<min && i!=x){
                min=nums[i];
            }
        }

        c = min;

        return a+b+c;

    }
};