class Solution {
public:
    int noOfSubs(vector<int> nums,int mid) {
        int subs=1;
        unsigned long long sum=0;
        for(int i=0;i<nums.size();i++) {
            if(sum+nums[i] <= mid) {
                sum+=nums[i];
            }
            else {
                subs++;
                sum=nums[i];
            }
        }
        return subs;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high) {
            int mid=low+(high-low)/2;
            
            if(noOfSubs(nums,mid) > k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};