class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return;
      
        int pivot = n - 2;
        while(pivot >= 0 && nums[pivot] >= nums[pivot + 1]) pivot--; // Searching backward and find the first position that breaks the monotonic increasing property
        if(pivot < 0) { // Array is in a monotonically decreasing order
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int idx = pivot + 1;
        while(idx < n && nums[idx] > nums[pivot]) idx++;
        swap(nums[idx - 1], nums[pivot]); // Swap nums[idx] with the smallest number greater than nums[pivot] from nums[pivot + 1, n) (if there are multiple, choose the one furthest to the right)
        reverse(nums.begin() + pivot + 1, nums.end()); // Then, reverse the nums[pivot + 1, n)
    }
};

//Time: O(n)
