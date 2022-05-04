/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* out = malloc(sizeof(int)* numsSize);
    *returnSize = numsSize;
    int start = 0;
    int end = numsSize - 1;
    for(int i = numsSize - 1; i >= 0; i--){
        if(abs(nums[start]) > abs(nums[end])){
            out[i] = pow(nums[start], 2);
            start++;
        }
        else{
            out[i] = pow(nums[end], 2);
            end--;
        }
    }
    return out;
}