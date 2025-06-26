class Solution {
public:
    int noOfBouquets(vector<int> bloomDay, int k, int m, int mid) {
        int count=0,bouquets=0;
        for(int i=0;i<bloomDay.size();i++) {
            if(bloomDay[i]<=mid) {
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
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=k*1LL*m*1LL;
        int low=INT_MAX,high=INT_MIN;
        for(int el : bloomDay) {
            low=min(low,el);
            high=max(high,el);
        }
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(bloomDay.size() < val) return -1;
            int bouquets=noOfBouquets(bloomDay,k,m,mid);
            if(bouquets >=m) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
    }
};