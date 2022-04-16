class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i, count_s = 0;
        int j, count_t = 0;
        // Start at the last index of string
        for(i = s.size() - 1; i >= 0; i--){
            if(s[i] == '#'){
                s.erase(s.begin() + i); // delete the '#' character
                count_s++; // count how many character that backspaces haven't delete
            }
            else if(count_s > 0){
                s.erase(s.begin() + i);
                count_s--;
            }
        }
        for(j = t.size() - 1; j >= 0; j--){
            if(t[j] == '#'){
                t.erase(t.begin() + j);
                count_t++;
            }
            else if(count_t > 0){
                t.erase(t.begin() + j);
                count_t--;
            }
        }
        return s == t;
    }
};