class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(),nums.end());
        int maxL = 0;

        for(int n : st){
            if(!st.count(n-1)){
                int current = n;
                int length = 1;

                while(st.count(current+1)){
                    current++;
                    length++;
                }
                maxL = max(length,maxL);

            }


        }

        return maxL;

    }
};