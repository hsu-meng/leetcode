class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> countMap;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            int idx = nums[i];
            if (countMap.find(nums[i]) == countMap.end()) { //not found
                countMap.insert(pair<int, int>(idx, 1));
            } else { //found
                countMap[nums[i]] = 2;
            }
        }
        for (const auto& c : countMap) {
            if(c.second == 2) {
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};
