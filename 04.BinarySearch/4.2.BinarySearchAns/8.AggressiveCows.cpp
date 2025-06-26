class Solution {
public:
    bool canWePlace(vector<int> nums, int mid, int k) {
        cout<<boolalpha;
        int cntCows=1,last=nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i]-last >=mid) {
                cntCows++;
                last=nums[i];
            }
            if(cntCows >= k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=1,high=nums[n-1]-nums[0];
        while(low<=high) {
            int mid=low+(high-low)/2;

            if(canWePlace(nums,mid,k)==true) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};