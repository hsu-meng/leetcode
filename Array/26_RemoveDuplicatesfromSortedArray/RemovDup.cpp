class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // use the two-pointer technique to move the least number of elements
        int slow = 0;
        int fast;
        for(fast = 1; fast < nums.size(); ++fast){
            if(nums[slow] != nums[fast]){
                slow++;
                nums[slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};
