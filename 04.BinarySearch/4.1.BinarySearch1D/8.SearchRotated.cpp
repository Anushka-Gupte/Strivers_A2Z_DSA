#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) {
       int n=nums.size();
        int st=0,end=n-1;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(nums[mid]==k) {
                return mid;
            }
            if(nums[st]<=nums[mid]) {
                if(nums[st]<=k && k<=nums[mid]) {
                    end=mid-1;
                } else {
                    st=mid+1;
                }
            } else {
                if(nums[mid]<=k && k<=nums[end]) {
                    st=mid+1;
                } else {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};