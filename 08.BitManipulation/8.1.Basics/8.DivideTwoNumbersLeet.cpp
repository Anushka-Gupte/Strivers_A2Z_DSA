class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        if(dividend == INT_MAX && divisor == 1) return INT_MAX;
        if(dividend == INT_MAX && divisor == -1) return -(INT_MAX);
        bool sign = true;
        if(dividend >= 0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;
        long n = labs((long)dividend);
        long d = labs((long)divisor);
        int ans = 0;
        while(n >= d) {
            int cnt = 0;
            while(n > (d << (1+cnt))) {
                cnt++;
            }
            ans += (1<<cnt);
            n = n - (d << cnt);
        }
        if(ans >= INT_MAX && sign == true) return INT_MAX;
        if(ans >= INT_MAX && sign == false) return INT_MIN;
        return (sign ? ans : (-1*ans));
    }
};