class Solution {
public:
    long long power(long long x, long long n, long long ans) {
        if (n == 0) return ans % 1000000007;
        if(n %2) return (power(x,n-1,(ans*x)%1000000007)) % 1000000007;
        else return (power((x*x)%1000000007,n/2,ans)) % 1000000007;
    }
    long long countGoodNumbers(long long n) {
        long long even,odd;
        if(n & 1) {
            n = n/2;
            even = n+1;
            odd = n;
        } else {
            n = n/2;
            even = n;
            odd = n;
        }
        return (power(5,even,1) * power(4,odd,1)) % 1000000007 ;
    }
};