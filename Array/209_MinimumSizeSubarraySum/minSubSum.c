int minSubArrayLen(int target, int* nums, int numsSize){
    int res = INT_MAX;
    int subSum = 0;
    int left = 0, right = 0;
    int subLen = 0;
    // using sliding window to find the contiguous subarray that sum >= target with minimal length
    for(right = 0; right < numsSize; right++){
        subSum += nums[right];
        // if sub-summary is larger than target, moving the left-bound
        while(subSum >= target){
            subLen = right - left + 1;
            res = res < subLen ? res : subLen;
            subSum -= nums[left++]; // update the left-bound
        }
    }
    return res == INT_MAX ? 0 : res;
}