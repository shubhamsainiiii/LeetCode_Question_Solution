class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int l = 0;
            int sum = 0;
            int minLength = INT_MAX;
            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                while (sum >= target) {
                    minLength = min(minLength, i - l + 1);
                    sum -= nums[l];
                    l++;
                }
            }

            return minLength == INT_MAX ? 0 : minLength;
    }
};