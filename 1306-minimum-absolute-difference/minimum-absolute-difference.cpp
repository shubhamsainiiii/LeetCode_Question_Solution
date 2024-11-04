class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int difference = INT_MAX;
        vector<vector<int>> newarr;
        for (int i = 1; i < arr.size(); i++) {
            difference = min(difference, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == difference) {
                newarr.push_back({arr[i - 1], arr[i]});
            }
        }
        return newarr;
    }
};