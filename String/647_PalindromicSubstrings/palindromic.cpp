class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int left, right;
        for (int i = 0; i < s.size()*2 - 1; i++) {
            left = i / 2;
            right = i / 2 + i % 2;
            while (left >= 0 && right < s.size() && s[left] == s[right]) { // check if string is palindromic while center expansion
                left--;
                right++;
                count++;
            }
        }
        return count;
    }
};
