class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letter, digit, ans;
        for(auto &l : logs) {
            int i = 0;
            while(l[i] != ' ') i++;
            if(isalpha(l[i + 1])) {
                letter.push_back(l);
            }
            else {
                digit.push_back(l);
            }
            stable_sort(letter.begin(), letter.end(), [](const string lhs, const string rhs) {
                int lidx = lhs.find(' '), ridx = rhs.find(' ');
                string sublhs = lhs.substr(lidx + 1);
                string subrhs = rhs.substr(ridx + 1);
                return sublhs == subrhs ? lhs < rhs : sublhs < subrhs;
            });
        }
        for(auto &let : letter) {
            ans.push_back(let);
        }
        for(auto &dig : digit) {
            ans.push_back(dig);
        }
        return ans;
    }
};
