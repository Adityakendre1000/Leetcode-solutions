class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {

        for(int i = n; i >= 1; i--){
            if((i%10) != 0){
                int a = n-i;
                if(to_string(a).find('0') == string::npos && to_string(i).find('0') == string::npos) return {i,a};
            }
        }
        return {};
    }
};