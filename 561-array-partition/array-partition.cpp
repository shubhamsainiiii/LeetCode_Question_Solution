class Solution {
public:
    int arrayPairSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int num = 0;
        for (int i = 0; i < arr.size(); i += 2) {
            num += arr[i];
        }
        return num;
    }
};