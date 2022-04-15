class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // use the two-pointer technique to move the least number of elements
        int slow = 0;
        int fast;
        int i;
        for(fast = 0; fast < nums.size(); ++fast){
            if(nums[fast] != 0){
                nums[slow++] = nums[fast];
            }
        }
        // fill with 0 from index of slow to size
        for(i = slow; i < nums.size(); ++i){
            nums[i] = 0;
        }
    }
};
