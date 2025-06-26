class Solution {
public:
    int noOfBouquets(int n, vector<int> nums, int k, int m, int mid) {
        int count=0,bouquets=0;
        for(int i=0;i<n;i++) {
            if(nums[i]<=mid) {
                count++;
            }
            else {
                bouquets+=count/k;
                count=0;
            }
        }
        bouquets+=count/k;
        return bouquets;
    }
    int roseGarden(int n,vector<int> nums, int k, int m) {
        long long val=k*1LL*m*1LL;
        int low=INT_MAX,high=INT_MIN;
        for(int el : nums) {
            low=min(low,el);
            high=max(high,el);
        }
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(n < m*k) return -1;
            int bouquets=noOfBouquets(n,nums,k,m,mid);
            if(bouquets >=m) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
  }
};