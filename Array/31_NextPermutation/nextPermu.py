class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        if(n == 1): 
            return
        pivot = n - 2
        while(pivot >= 0 and nums[pivot] >= nums[pivot + 1]):
            pivot = pivot - 1
        if(pivot < 0):
            nums.reverse()
            return
        idx = pivot + 1
        while(idx < n and nums[idx] > nums[pivot]):
            idx = idx + 1
        temp = nums[idx - 1]
        nums[idx - 1]  = nums[pivot]
        nums[pivot] = temp
        nums[pivot + 1:] = nums[n - 1: pivot: -1]
