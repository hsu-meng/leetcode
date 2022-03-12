class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        for c in candies:
            if c + extraCandies >= max(candies):
                result.append(True)
            else:
                result.append(False)
        return result