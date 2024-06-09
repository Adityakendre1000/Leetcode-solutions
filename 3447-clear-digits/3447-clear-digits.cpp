class Solution {
public:
    string clearDigits(string s) {
        
        while (true) {
        size_t digitPos = s.find_first_of("0123456789");

        if (digitPos ==string::npos) {
            break;
        }

        if (digitPos == 0) s.erase(digitPos, 1);
        else s.erase(digitPos - 1, 2);

         }
        return s;

    }
};