#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int lp=0,rp=n-1;
        cout<<boolalpha;
        while(lp<rp) {
            if(isalnum(s[lp])) {
                if(isalnum(s[rp])) {
                    if(tolower(s[lp])!=tolower(s[rp])) {
                        return false;
                    } else {
                        lp++;
                        rp--;
                    }
                } else rp--; 
            } else lp++;
        }
        return true;
    }
};