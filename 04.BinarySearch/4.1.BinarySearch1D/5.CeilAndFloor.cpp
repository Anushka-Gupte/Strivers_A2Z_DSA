#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n=nums.size();
        vector<int> ans;
        int st=0,end=n-1,floorval=-1,ceilval=-1;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(x==nums[mid]) {
                floorval=nums[mid];
                ceilval=nums[mid];
                break;
            }
            else if(x > nums[mid]) {
                floorval=max(nums[mid],floorval);
                st=mid+1;
            }
            else {
                ceilval=nums[mid];
                end=mid-1;
            }
        }
        ans.push_back(floorval);
        ans.push_back(ceilval);
        return ans;
    }
};

