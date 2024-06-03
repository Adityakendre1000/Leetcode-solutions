class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords = 0;
        
        for(int i = 0; i < sentences.size(); ++i){
            int spaces = 0;
            for(char ch:sentences[i]){
                if(ch == ' ') ++spaces;
            }
            maxwords = max(maxwords,spaces+1);
        }
        return maxwords;
    }
};