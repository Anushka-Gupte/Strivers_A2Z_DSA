class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        map<long long, int> preSumMap;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            if(sum==k) {
                maxLen=max(maxLen,i+1);
            }
            long long rem=sum-k;
            if(preSumMap.find(rem) != preSumMap.end()) {
                int len = i-preSumMap[rem];
                maxLen=max(maxLen,len);
            }
            if(preSumMap.find(rem) == preSumMap.end()) {
                preSumMap[sum]=i;
            }
        }
        return maxLen;
    }
};
