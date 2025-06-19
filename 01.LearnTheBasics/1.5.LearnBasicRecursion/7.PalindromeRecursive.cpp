#include <iostream>
using namespace std;

bool palindrome(int i,string &s,int n) {
    if(i>=n/2) return true;
    
    if(s[i]!=s[n-i-1]) return false;
    
    return palindrome(i+1,s,n);
}