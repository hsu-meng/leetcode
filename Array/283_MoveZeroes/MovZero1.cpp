class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for(int i = nums.size(); i < s; i++) {
            nums.push_back(0);
        }
    }
};
