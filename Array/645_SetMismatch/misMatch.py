class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        lost = 0
        for i in range(1, len(nums)+1):
            if i in nums:
                nums.remove(i)
            else:
                lost = i
                nums.append(lost)
        return nums