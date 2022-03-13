class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        output = 0
        pre = 0
        for i in range(1, len(values)): # O(N),  find maximum of (values[i] + i) and (values[j] - j)
            output = max(values[pre] + values[i] + pre - i, output)
            if values[i] + i > values[pre] + pre:
                pre = i
        return output