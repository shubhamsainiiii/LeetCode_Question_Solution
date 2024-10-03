class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int firstPosition = -1, lastPosition = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) 
            {
                firstPosition = i;
                break;
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == target) 
            {
                lastPosition = i;
            }
        }
        return {firstPosition, lastPosition};
    }
};