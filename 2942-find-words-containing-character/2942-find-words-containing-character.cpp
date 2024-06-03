class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        
        for(int i = 0; i < words.size(); ++i){
            for(char curr : words[i]){
                if(curr == x) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};