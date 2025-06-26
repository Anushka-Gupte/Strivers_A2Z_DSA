class Solution {
public:
    int noOfGasStations(long double dist, vector<int> arr) {
        int count=0;
        for(int i=1;i<arr.size();i++) {
            int numInBetwn = ((arr[i] - arr[i-1])/dist);
            if(((arr[i] - arr[i-1])/dist) == numInBetwn * dist) numInBetwn--;
            count+=numInBetwn;
        }
        return count;
    }
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n = arr.size();
       long double low=0;
       long double high=0;
       for(int i=0;i<n-1;i++) {
        high=max(high, (long double)(arr[i+1] - arr[i]));
       }
       long double diff = 1e-6;
       while(high - low > diff) {
        long double mid = (high + low)/2.0;
        int count = noOfGasStations(mid,arr);
        if(count > k) low=mid;
        else high=mid;
       }
       return high;
    }
};