class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                arr.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];   
        }
        return arr;
    }
};