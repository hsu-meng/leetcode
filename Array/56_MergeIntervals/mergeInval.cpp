class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        int tmp = intervals[0][1];
        for(int i = 1; i < n; i++) {
            if(tmp >= intervals[i][0]) {
                tmp = max(tmp, intervals[i][1]);
                ans.back()[1] = tmp;
            }
            else {
                ans.push_back(intervals[i]);
                tmp = intervals[i][1];
            }
        }
        return ans;
    }
};
