class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 ) return false;
        long long sum=0;
        int rem;
        int n=x;
        while(x>0)
        {
            rem=x%10;
            x=x/10;
            sum=sum*10+rem;
        } 
        if(sum==n) return true;
        else return false;
    }
};