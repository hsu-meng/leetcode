class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        ans = []
        for i, n in enumerate(nums):
            if i % 2 == 0:
                freq = n
            else:
                for f in range(freq):
                    ans.append(n)
        return ans