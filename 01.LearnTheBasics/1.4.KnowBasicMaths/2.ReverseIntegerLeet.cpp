#include<climits>
class Solution {
public:
    int reverseNumber(int x) {
        int num=0,d;
            while(x!=0) {
                d=x%10;
               if (num > INT_MAX / 10 || (num == INT_MAX / 10 && d > 7)) return 0;
        else if (num < INT_MIN / 10 || (num == INT_MIN / 10 && d < -8)) return 0;
                else {
                    x/=10;
                    num=num*10+d;
                }
            }
            return num;
    }
};