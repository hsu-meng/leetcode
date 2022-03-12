class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for s in stones:
            if jewels.find(s) != -1:
                count += 1
        return count