class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxNum = nums[0]; 
        int newMax = nums[0]; 
  
        for (int i = 1; i < nums.size(); i++) 
        { 
            newMax = max(nums[i], newMax + nums[i]); 
            maxNum = max(maxNum, newMax); 
        } 
        return maxNum; 
    }
};