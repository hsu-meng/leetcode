class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        int tb[1005] = { 0 }; # hash table

        for (int n : nums1) {
            tb[n] = 1;
        }

        for (int n : nums2) {
            if (tb[n] == 1) {
                result.insert(n);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};