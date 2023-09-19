class Solution {
public:
    int strStr(string haystack, string needle) {
        int haySize = haystack.size(), ndlSize = needle.size(), i = 0, j = 0, count = 0;
        while(i < haySize) {
            if(haystack[i] == needle[j]) {
                i++;
                j++;
                count++;
                if(j == ndlSize) return i - ndlSize;
            }
            else {
                i++;
                i -= count;
                j = 0;
                count = 0;
            }
        }
        return -1;
    }
};
