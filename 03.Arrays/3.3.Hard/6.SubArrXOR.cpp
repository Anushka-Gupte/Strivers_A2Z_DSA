class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        map<int,int> mpp;
        int xr = 0;
        mpp[xr]++;
        int count = 0;
        for(int i=0;i<n;i++) {
            xr = xr ^ nums[i];
            int x = xr ^ k;
            count+= mpp[x];
            mpp[xr]++;
        }
        return count;
    }
};