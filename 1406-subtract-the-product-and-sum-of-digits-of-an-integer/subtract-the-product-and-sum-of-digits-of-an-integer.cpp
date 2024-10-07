class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>arr;
        while(n>0)
        {
            arr.push_back(n%10);
            n/=10;
        }
        int product=1,sum=0;
        for(auto it:arr)
        {
            product*=it;
            sum+=it;
        }
        return product-sum;
    }
};