class Solution {
public:
    int noOfSubs(vector<int> a,int mid) {
        int subs=1;
        unsigned long long sum=0;
        for(int i=0;i<a.size();i++) {
            if(sum+a[i] <= mid) {
                sum+=a[i];
            }
            else {
                subs++;
                sum=a[i];
            }
        }
        return subs;
    }
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low=*max_element(na.begin(),a.end());
        int high=accumulate(a.begin(),a.end(),0);
        while(low<=high) {
            int mid=low+(high-low)/2;
            
            if(noOfSubs(a,mid) > k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};