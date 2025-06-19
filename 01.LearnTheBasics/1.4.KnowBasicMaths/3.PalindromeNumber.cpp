#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
        int rev=0,d,copy;
        copy=n;
        while(n!=0) {
            d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        cout<<boolalpha;
        if(copy==rev) return true;
        else return false;
    }
};