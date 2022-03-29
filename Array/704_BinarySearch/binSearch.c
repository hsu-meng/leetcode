int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int mid;
    // while left <= right, indicates that there's element in the interval
    while(left <= right){
        // update the middle value
        mid = (left + right) / 2;
        // the target is located in [left, middle-1] interval
        if(nums[mid] > target){
            right = mid - 1;
        }
        // the target is located in [middle+1, right] interval
        else if(nums[mid] < target){
            left = mid + 1;
        }
        // the target is equal to the middle value
        else{
            return mid;
        }
    }
    // if not found the target element, return -1
    return -1;
}
