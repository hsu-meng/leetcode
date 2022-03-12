class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        for n in nums:
            count = 0
            for m in nums:
                if n > m:
                    count += 1
            ans += [count]
        return ans