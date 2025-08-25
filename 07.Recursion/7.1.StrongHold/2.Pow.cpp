class Solution {
public:
    double power(double x, int n, double ans) {
         if(n == 0) return ans;
        if(n %2) return power(x,n-1,ans*x);
        else return power(x*x,n/2,ans);
    }
    double myPow(double x, int n) {
        //your code goes here
        if(n < 0) {
            return (double)(1.0)/(double)power(x,-n,1);
        } else {
            return power(x,n,1);
        }
    }
};
