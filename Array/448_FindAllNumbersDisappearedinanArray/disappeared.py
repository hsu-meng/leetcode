class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        output = []
        uni = set(nums)
        for i in range(1, len(nums)+1):
            if i not in uni:
                output.append(i)
        return output