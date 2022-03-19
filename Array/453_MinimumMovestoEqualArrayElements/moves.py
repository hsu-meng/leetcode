class Solution:
    def minMoves(self, nums: List[int]) -> int:
        # sum + (n - 1) * moves = equal_value * n
        # min_element + moves = equal_value
        # => moves = sum - n * min_element
        return sum(nums) - len(nums) * min(nums)