class Solution:
    def defangIPaddr(self, address: str) -> str:
        splt = []
        ans = ""
        splt = address.split(".")
        for i in range(len(splt)):
            if i < len(splt)-1:
                ans += splt[i]
                ans += "[.]"
            else:
                ans += splt[i]
        return ans