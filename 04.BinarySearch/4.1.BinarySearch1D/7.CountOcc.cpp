#include<iostream>
#include<vector>
using namespace std;
class Solution {
    int count(vector<int>& nums,int target) {
        int low=0,high=nums.size()-1;
        int first=-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                first=mid;
                high=mid-1;
            }
            else if(target > nums[mid]) {
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        int low=0,high=nums.size()-1;
        int last=-1;
        while(low<=high) {
            int mid=low+(high-low)/2;

            if(nums[mid]==target) {
                last=mid;
                low=mid+1;
            }
            else if(target > nums[mid]) {
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        if(first == -1) return 0;
        else return last-first+1;
    }
};
