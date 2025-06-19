#include<cmath>
class Solution {
public:
    int reverseNumber(int n) {
        int num=0,d,count=0,copy;
        if (n==0) {
            return 0;
        } else {
            copy=n;
            while (n!=0) {
               n/=10;
               count++;
            }
            n=copy;
            while(count!=0) {
                d=n%10;
                num=num+d*pow(10,count-1);
                n/=10;
                count--;
            }
            return num;
        }
    }
};