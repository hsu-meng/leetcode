class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));

        int i, j;
        int loop = n / 2;
        int xStart = 0, yStart = 0; // position of start
        int val = 1; // filling value
        int offset = 1; // length of width not included
        int center = n / 2;
        
        while (loop--) {
            for (j = yStart; j < n - offset; j++) { // left to right
                matrix[xStart][j] = val++;
            }
            for (i = xStart; i < n - offset; i++) { // up to down
                matrix[i][j] = val++;
            }
            for (; j > yStart; j--) { // right to left
                matrix[i][j] = val++;
            }
            for (; i > xStart; i--) { // down to up
                matrix[i][j] = val++;
            }
            xStart++;
            yStart++;
            offset++;
        }
        if (n % 2 == 1) {
            matrix[center][center] = val;
        }
        return matrix;
    }
};
