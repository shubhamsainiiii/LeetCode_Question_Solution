class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]) - 1;
            nums[num] = nums[num] > 0 ? -nums[num] : nums[num];
        }
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                arr.push_back(i + 1);
            }
        }
        return arr;
    }
};