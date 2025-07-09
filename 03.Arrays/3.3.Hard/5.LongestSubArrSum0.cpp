class Solution {
  public:
    int maxLen(vector<int>& arr) {
        map<long long, int> preSumMap;
        long long sum=0;
        int maxm=0;
        for(int i=0;i<arr.size();i++) {
            sum+=arr[i];
            if(sum==0) {
                maxm=max(maxm,i+1);
            }
            long long rem=sum-0;
            if(preSumMap.find(rem) != preSumMap.end()) {
                int len = i-preSumMap[rem];
                maxm=max(maxm,len);
            }
            if(preSumMap.find(rem) == preSumMap.end()) {
                preSumMap[sum]=i;
            }
        }
        return maxm;
    }
};