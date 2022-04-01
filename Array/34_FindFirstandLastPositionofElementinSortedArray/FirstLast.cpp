class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBorder = search(nums, target);
        int rightBorder = search(nums, target + 1) - 1;
        if(rightBorder - leftBorder >= 0){
            return {leftBorder, rightBorder};
        }
        else{
            return {-1, -1};
        }
    }
private:
    int search(vector<int>& nums, int target);
};

int Solution::search(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(target > nums[mid]){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return left;
}