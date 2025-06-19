#include<iostream>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        bool prime=true;
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) prime=false;
        }
        cout<<boolalpha;
        return prime;
    }
};