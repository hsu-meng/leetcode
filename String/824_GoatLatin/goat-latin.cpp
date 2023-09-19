class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> str;
        string ans;
        stringstream ss(sentence);
        string s;
        while(getline(ss, s, ' ')) {
            str.push_back(s);
        }
        int i = 1;
        vector<int>::iterator it;
        for(auto st : str) {
            char c = st[0];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                st += "ma";
            }
            else {
                st = st.substr(1, st.size()) + st.substr(0, 1);
                st += "ma";
            }
            for(int a = 0; a < i; a++) {
                st += 'a';
            }
            if(i < str.size()) {
                ans += st;
                ans += ' ';
            }
            else {
                ans += st;
            }
            i++;
        }
        return ans;
    }
};
