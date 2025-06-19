#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,d,copy;
        copy=x;
        if(x<0) {
        cout<<boolalpha;
        return false;
        }
        while(x>0) {
            d=x%10;
            cout<<boolalpha;
             if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && d > 7)) return false;
        else if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && d < -8)) return false;
        else {
            rev=rev*10+d;
            x/=10;
        }
    }
        cout<<boolalpha;
        if(copy==rev) return true;
        else return false;
    }
};