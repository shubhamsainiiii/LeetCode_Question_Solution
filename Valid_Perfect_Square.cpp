class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0)
            return false;
        int low = 0, high = num;

        while (low <= high) {
            long mid = (high + low) / 2;
            long Square = mid * mid;
            if (Square == num)
                return true;
            else if (Square < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};