class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int left = newInterval[0], right = newInterval[1], n = intervals.size(), k = 1;
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(newInterval[0] >= intervals[i][0] && newInterval[0] <= intervals[i][1])
                left = intervals[i][0];
            if(newInterval[1] >= intervals[i][0] && newInterval[1] <= intervals[i][1])
                right = intervals[i][1];
        }
        newInterval[0] = left;
        newInterval[1] = right;
        if(intervals.empty()) {
            ans.push_back(newInterval);
            return ans;
        }
        
        for(int i = 0; i < n; i++) {
            if(intervals[i][1] >= newInterval[0]) {
                k = i;
                break;
            }
            else {
                ans.push_back(intervals[i]);
                k++;
            }
        }
        for(int i = k; i < n; i++) {
            if(newInterval[1] >= intervals[i][0]) {
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(intervals[i][1], newInterval[1]);
            }
            else {
                ans.push_back(newInterval);
                newInterval = intervals[i];
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};
