class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int fast;
        int i;
        for(fast = 0; fast < nums.size(); ++fast){
            if(nums[fast] != 0){
                nums[slow++] = nums[fast];
            }
        }
        for(i = slow; i < nums.size(); ++i){
            nums[i] = 0;
        }
    }
};