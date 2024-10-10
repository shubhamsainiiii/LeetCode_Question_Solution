class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=-1,high=-1;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                low=i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--)
        {
            if(nums[j]==target)
            {
                high=j;
                break;
            }
        }
        arr.push_back(low);
        arr.push_back(high);
        return arr;
    }
};