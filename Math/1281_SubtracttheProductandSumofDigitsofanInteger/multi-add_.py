# Another rather simple approach would be to use the least-liner solution
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        digits = [int(d) for d in str(n)]
        multi = 1
        add = 0
        for d in digits:
            multi *= d
            add += d
        return multi - add
