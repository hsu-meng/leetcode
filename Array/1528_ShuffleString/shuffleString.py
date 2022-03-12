class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        ans = ""
        for i in range(len(indices)):
            ans += s[indices.index(i)]
        return ans