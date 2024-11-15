class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, left = 0, right = 0;
        for(int i = height.size() - 1; i >= 0; i--){
            if(height[i] < right) continue;
            left = 0;
            for(int j = 0; j < i; j++){
                if(height[j] < left) continue;
                maxArea = max(maxArea, min(height[i], height[j]) * (i - j));
                left = max(left, height[j]);
            }
            right = max(right, height[i]);
        }
        return maxArea;
    }
};