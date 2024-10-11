class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int missingNumber = arr[mid] - (mid + 1);

            if (missingNumber < k) {
                low = mid + 1;
            } else
                high = mid - 1;
        }

        if (high < 0)
            return k;
        return k + high + 1;
    }
};