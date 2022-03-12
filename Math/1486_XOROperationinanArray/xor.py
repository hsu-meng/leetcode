class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        output = 0
        nums = [0] * n
        for i in range(n):
            nums[i] = start + 2 * i
            output ^= nums[i]
        return output