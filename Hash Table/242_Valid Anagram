class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        tb = [0] * 26
        
        for i in range(len(s)):
            tb[ord(s[i]) - ord('a')] += 1
            
        for j in range(len(t)):
            tb[ord(t[j]) - ord('a')] -= 1
            
        for k in range(len(tb)):
            if tb[k] != 0:
                return False
        return True
