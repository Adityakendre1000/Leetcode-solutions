class Solution {
public:
    string reverseWords(string s) {
        
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int start = 0;
        int end = s.size()-1;
        
        while(start <= end && s[start] == ' ') ++start;
        while(end >= start && s[end] == ' ') --end;
        
        vector<string> words;
        string word;
        
        for(int i = start; i <= end; ++i){
            if(s[i] != ' ') word += s[i];
            else if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        }
        if(!word.empty()) words.push_back(word);
        
        reverse(words.begin(),words.end());
        
        ostringstream oss;
        for (size_t i = 0; i < words.size(); ++i) {
            if (i > 0) oss << ' ';
            oss << words[i];
        }
        
        return oss.str();
        
    }
};