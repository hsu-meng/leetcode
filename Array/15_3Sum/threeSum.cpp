class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> index;
        set<vector<int>> set; // store unique vectors
        int i, j, k;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        for (i = 0; i < n-2; i++) {
            j = i + 1;
            k = n - 1;
            while(j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    set.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        for (auto element:set) {
            index.push_back(element);
        }
        return index;
    }
};
