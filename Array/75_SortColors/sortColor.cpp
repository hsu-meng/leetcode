class Solution {
public:
    void sortColors(vector<int>& nums) {
        int idx = 0, idxR = 0, n = nums.size() - 1;
        while(idx <= n) {
            if(nums[idx] == 0)
                swap(nums[idx++], nums[idxR++]);
            else if(nums[idx] == 2)
                swap(nums[idx], nums[n--]);
            else
                idx++;
        }
    }
};
