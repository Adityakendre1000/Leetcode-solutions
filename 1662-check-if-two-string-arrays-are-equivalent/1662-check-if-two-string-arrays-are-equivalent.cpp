class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1;
        string s2;
        
        for(string word : word1) s1 += word;
        for(string word : word2) s2 += word;
        
        if(s1 == s2) return true;
        else return false;
    }
};