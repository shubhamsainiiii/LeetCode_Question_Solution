class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        if (n == 0)
            return 0;
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];

        for (int i = 1; i < n; i++) {
            int current = nums[i];
            int tempMax = maxProduct;
            if (current > 0) {
                maxProduct = max(current, maxProduct * current);
                minProduct = min(current, minProduct * current);
            } else {
                maxProduct = max(current, minProduct * current);
                minProduct = min(current, tempMax * current);
            }
            if (maxProduct > result) {
                result = maxProduct;
            }
        }

        return result;
    }
};