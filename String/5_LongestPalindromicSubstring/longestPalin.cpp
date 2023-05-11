class Solution {
public:
    string longestPalindrome(string s) {
        string pal;
        int left, right;
        int count, max = 0;
        int start, end;
        
        for (int i = 0; i < s.size()*2 - 1; i++) {
            count = 0;
            left = i / 2;
            right = i / 2 + i % 2;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                count = right - left + 1;
                left--;
                right++;
            }
            if (count > max) {
                start = left + 1;
                end = right - 1;
                max = count;
            }
        }
    
        return s.substr(start, max);
    }
};
