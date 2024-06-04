class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> lpalli;
        
        int count = 0;
        bool hasodd = false;
        
        for(char ch : s){
            lpalli[ch]++;
        }
        
        for(auto const& [letter,freq] : lpalli){
            
            if(freq % 2 == 0) count += freq;
            else {
                count += freq-1;
                hasodd = true;
            }
        }
        if(hasodd){
            count++;
        }
        return count;
    }
};