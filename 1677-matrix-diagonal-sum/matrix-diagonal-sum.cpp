class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int s=arr.size();
        int sum = 0;
        for (int i = 0; i < s; i++) {
            sum += arr[i][i];
            sum += arr[i][s - i - 1];
        }
        if (s & 1)
            return sum - arr[s / 2][s / 2];
        return sum;
    }
};