class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq;
        if(nums.size()==0) return 0;
        for(int n : nums){
            seq.insert(n);
        }

        int length = 1;

        for(int n : seq){
            int curr = n;
            int cl = 1;

            if(!seq.contains(curr-1)){
                while(seq.contains(curr+1)){
                curr = curr+1;
                cl++;
            }
            }
            
            length = max(length,cl);
        }
        return length;
    }
};