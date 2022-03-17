from collections import Counter
class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        c_nums = Counter(nums)
        degree = max(list(c_nums.values()))
        last = len(nums)
        left = {}
        right = {}
        count = {}
        for i, n in enumerate(nums):
            if n not in left:
                left[n] = i
                count[n] = 0
            count[n] += 1
            right[n] = i
        for n, c in count.items():
            if c == degree:
                last = min(last, right[n] - left[n] + 1)
        return last
                    