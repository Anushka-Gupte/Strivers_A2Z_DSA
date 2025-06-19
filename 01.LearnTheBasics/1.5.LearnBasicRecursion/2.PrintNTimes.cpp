#include<iostream>
using namespace std;
void print(int i,int n) {
    if(i>n) return;
    
    cout<<"TakeUForward"<<" ";
    print(i+1,n);
}