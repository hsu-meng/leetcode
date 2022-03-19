class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        citations.sort()
        for i, c in enumerate(citations):
            if n - i <= c:
                return n - i # h-index = min(n-i, citations[i])
        return 0