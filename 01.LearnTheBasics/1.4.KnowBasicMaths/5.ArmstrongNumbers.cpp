#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
       string num=to_string(n);
        int count=num.length();
        int sum=0;
        for(char d : num) {
        sum+=(int)pow((d-'0'),count);
        }
        cout<<boolalpha;
        if(sum==n) return true;
        else return false;
    }
};