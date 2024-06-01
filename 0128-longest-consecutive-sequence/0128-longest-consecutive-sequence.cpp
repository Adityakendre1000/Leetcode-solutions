class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        
        unordered_map<int,bool> seq;
        
        for (int num : nums){
            seq[num] = false;
        }
        
        for (const auto& [num,val] : seq){
            int currlen = 1;
            int a = 1;
            seq[num] = true;
            while(seq.find(num+a) != seq.end() && seq[num+a] == false){
                seq[num+a] = true;
                a++;
                currlen++;
            }
            
            int b = 1;
            while(seq.find(num-b) != seq.end() && seq[num-b] == false){
                seq[num-b] = true;
                b++;
                currlen++;
            }
            
            longest = max(longest,currlen);
            
        }
        return longest;
    }
};