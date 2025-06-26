class Solution {
public:
    int ans(vector<int> nums,int mid) {
        unsigned long long sum=0;
        for(int el : nums) {
        sum += ceil((double)el/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int tlimit) {
        int low=1,high=INT_MIN;
        for(int el : nums) {
            high=max(high,el);
        }
        while(low<=high) {
            int mid=low+(high-low)/2;
            
            unsigned long long sum=ans(nums,mid);
            if(sum<=limit) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
    }
};