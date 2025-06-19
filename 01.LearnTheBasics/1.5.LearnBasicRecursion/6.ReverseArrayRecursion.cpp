#include <iostream>
using namespace std;

void revArr(int i,int arr[],int n) {
    if(i>=n/2) return;
    
    swap(arr[i],arr[n-1-i]);
    revArr(i+1,arr,n);
}