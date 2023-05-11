class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int add = target;
        int find = 0;

        for (int i = 0; i < nums.size(); i++) {
            add -= nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == add) {
                    ans.push_back(i);
                    ans.push_back(j);
                    find = 1;
                }
            }
            add = target;
        }
        if (!find) {
                return {};
            }
        return ans;
    }
};
