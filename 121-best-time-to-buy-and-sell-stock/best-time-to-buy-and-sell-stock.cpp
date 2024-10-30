class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX;   
        int maxxP = 0;        
        for (int price : prices) {
            minn = min(minn, price);
            int profit = price - minn;
            maxxP = max(maxxP, profit);
        }
        return maxxP;
    }
};