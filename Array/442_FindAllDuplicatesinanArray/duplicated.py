from collections import Counter
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        init = Counter(nums)
        output = []
        for k, v in init.items():
            if v == 2:
                output.append(k)
        return output