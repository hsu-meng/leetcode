class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int idx;
        vector<vector<int>> ans(m, vector<int>(n));

        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                idx = (i * n + j + k) % (m * n); //flatten the matrix and calculate the index
                ans[idx / n][idx % n] = grid[i][j];
            }
        }
        return ans;
    }
};
