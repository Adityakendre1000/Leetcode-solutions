class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        int x = 0;
        
        for(string op : operations){
            if(op == "--X" || op == "X--") --x;
            else ++x;
        }
        return x;
    }
};