class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        digits = []
        num = 0
        multi = 1
        add = 0
        while n != 0:
            num = n % 10
            n //= 10
            digits.append(num)
        for d in digits:
            multi *= d
            add += d
        return multi - add