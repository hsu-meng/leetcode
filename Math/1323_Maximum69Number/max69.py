class Solution:
    def maximum69Number (self, num: int) -> int:
        strNum = str(num)
        output = ''
        once = 0
        for s in strNum:
            if s == '6' and once == 0:
                s = '9'
                once = 1
            output += s
        return output