class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size() - 1;
        for(int i = 0, j = n; i < j; ) {
            int sum = numbers[i] + numbers[j];
            if(sum == target) return {i + 1, j + 1};
            if(sum > target) {
                j--;
            }
            else {
                i++;
            }
        }
        return {};
    }
};
