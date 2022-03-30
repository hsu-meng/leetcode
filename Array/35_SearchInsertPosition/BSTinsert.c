int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(target < nums[mid]){
            right = mid - 1;
        }
        else if(target > nums[mid]){
            left = mid + 1;
        }
        // find the target == nums[mid]
        else{
            return mid;
        }
    }
    // target is not found, when
    // (1) target is located before all elements, the interval [left, right] = [0, -1], inserted-position = 0 = right + 1
    // (2) target is located between two elements, [left, right], inserted-position = mid = right + 1
    // (3) target is located after all elements, inserted-position = right + 1
    return right + 1;
}