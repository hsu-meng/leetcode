class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string comb(digits.size(), ' ');  // store the combination of phone-letter

        if (digits.empty()) {
            return output;
        }
        else {
            backtracking(digits, output, letterMap, comb, 0);
        }

        return output;
    }
    void backtracking(const string& digits, vector<string>& output, vector<string>& letterMap, string& comb, int index) {
        if (index == digits.size()) {
            output.push_back(comb);
        }
        else {
            string str = letterMap[digits[index]-'0'];
            for (int i = 0; i < str.size(); i++) {
                comb[index] = str[i];
                backtracking(digits, output, letterMap, comb, index + 1);
            }
        }
    }

private:
    vector<string> output;
    vector<string> letterMap = {
        "",     //0
        "",     //1
        "abc",  //2
        "def",  //3
        "ghi",  //4
        "jkl",  //5
        "mno",  //6
        "pqrs", //7
        "tuv",  //8
        "wxyz"  //9
    };
};
