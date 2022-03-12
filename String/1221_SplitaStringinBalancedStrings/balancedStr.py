class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count = 0
        start = s[0]
        pairs = 0
        for i in s:
            if start == i:
                pairs += 1
            else:
                pairs -= 1
            if pairs == 0:
                count += 1
        return count