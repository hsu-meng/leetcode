class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        pairs = 0
        for i, n in enumerate(nums):
            for j in range(i+1, len(nums)):
                if n == nums[j]:
                    pairs += 1
        return pairs