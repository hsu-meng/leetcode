class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l = 0, late = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'A') {
                a++;
                l = 0;
            }
            else if(s[i] == 'L') {
                l++;
            }
            else {
                l = 0;
            }
            if(l >= 3) late = 1; 
        }
        if(a < 2 && !late) return true;
        return false;
    }
};
