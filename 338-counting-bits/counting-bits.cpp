class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n + 1);
        arr[0] = 0;
        for (int i = 1; i <= n; i++) {
            arr[i] = arr[i /2] + i % 2;
        }
        return arr;
    }
};