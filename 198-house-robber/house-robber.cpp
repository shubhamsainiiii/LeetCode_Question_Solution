class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        int num1 = max(nums[0], nums[1]);
        int num2 = nums[0];
        int current = num1;

        for (int i = 2; i < n; i++) {
            current = max(num1, num2 + nums[i]);
            num2 = num1;
            num1 = current;
        }
        return current;
    }
};
