class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        output = ''
        for i in s:
            if i == '(':
                if stack:
                    output += i
                stack.append(i)
            elif i == ')':
                if stack[-1] == '(':
                    stack.pop()
                else:
                    stack.append(i)
                if stack:
                    output += i
        return output