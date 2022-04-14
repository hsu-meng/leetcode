class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // use the two-pointer technique to move the least number of elements
        int slow = 0;
        int fast;
        for(fast = 0; fast < nums.size(); ++fast){
            if(nums[fast] != val){
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};
