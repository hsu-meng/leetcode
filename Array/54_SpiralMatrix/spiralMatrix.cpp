class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int m = matrix.size(); // #row
        int n = matrix[0].size(); // #column
        int i, j;
        int loop = min(m, n) / 2;
        int mid = min(m, n) / 2;
        int xStart = 0, yStart = 0;
        int rlen = n - 1, clen = m - 1;

        while (loop--) {
            for (j = yStart; j < rlen; j++) { // left to right
                output.push_back(matrix[xStart][j]);
            }
            for (i = xStart; i < clen; i++) { //up to down
                output.push_back(matrix[i][j]);
            }
            for (; j > yStart; j--) { // right to left
                output.push_back(matrix[i][j]);
            }
            for (; i > xStart; i--) { // down to up
                output.push_back(matrix[i][j]);
            }
            xStart++;
            yStart++;
            rlen--;
            clen--;
        }
        if (min(m, n) % 2) { // remaining a row or column not go through
            if (m > n) {
                for (i = mid; i < mid + abs(m-n) + 1; i++) {
                    output.push_back(matrix[i][mid]);
                }
            }
            else {
                for (j = mid; j < mid + abs(m-n) + 1; j++) {
                    output.push_back(matrix[mid][j]);
                }
            }
        }
        
        return output;
    }
};
