class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        matrix = [[0]*n for _ in range(m)] # Initial matrix
        count = 0
        for i in indices:
            r = i[0]
            c = i[1]
            for m, col in enumerate(matrix):
                for n, row in enumerate(col):
                    if m == r:
                        matrix[m][n] += 1
                    if n == c:
                        matrix[m][n] += 1
        for lines in matrix:
            for elements in lines:
                if elements%2 == 1:
                    count += 1
        return count