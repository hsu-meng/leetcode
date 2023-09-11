class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, n = height.size(), max_water = 0;
        
        if(n < 3) {
            if(n == 1) return height[0];
            else return min(height[0], height[1]);
        }
        
        while(left < right) {
            int water = min(height[left], height[right]) * abs(right - left);
            max_water = max(max_water, water);

            if(height[left] < height[right]) left++;
            else right--;
        }
        
        return max_water;
    }
};
