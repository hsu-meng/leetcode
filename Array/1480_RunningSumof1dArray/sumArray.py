class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        total = []
        for i, n in enumerate(nums):
            if i == 0:
                total.append(n)
            else:
                total.append(total[i-1] + n)
        return total