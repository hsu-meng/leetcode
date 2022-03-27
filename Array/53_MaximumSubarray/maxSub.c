#define MAX(a, b) ((a>b)?a:b)

int maxSubArray(int* nums, int numsSize){
    int i = 0;
    int max = nums[0];
    for(i = 1; i < numsSize; i++){
        nums[i] = MAX(nums[i], nums[i] + nums[i-1]);
        max = MAX(max, nums[i]);
    }
    return max;
}
