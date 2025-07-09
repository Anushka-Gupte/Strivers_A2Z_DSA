class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int maxm = INT_MIN;
        vector<int> ans;
        for(int i=n-1;i>=0;i--) {
            if(nums[i] > maxm) {
                ans.push_back(nums[i]);
            }
            maxm = max(maxm,nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};