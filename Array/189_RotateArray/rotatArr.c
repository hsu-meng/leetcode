void rotate(int* nums, int numsSize, int k){
    if(nums == NULL || numsSize < 1) return;
    k = k % numsSize;
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);
}
void reverse(int* nums, int i, int j){
    int tmp;
    while(i < j){
        tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
        i++;
        j--;
    }
}
