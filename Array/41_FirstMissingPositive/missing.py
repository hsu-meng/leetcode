class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = [n for n in nums if n > 0] # Remove the negative numbers from the list
        nums.sort()
        nums = list(dict.fromkeys(nums)) # Remove any duplicates from the list
        for i in range(len(nums)): # O(n)
            if i+1 != nums[i]:
                return i+1
        return len(nums) + 1
