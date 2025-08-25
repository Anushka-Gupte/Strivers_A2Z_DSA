class Solution {
public:
    void findCombSum(int idx, int n, int k, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
            if(n == 0 && k == 0) {
                ans.push_back(ds);
                return;
            }
            if(idx == nums.size()) return;
            ds.push_back(nums[idx]);
            findCombSum(idx+1, n-nums[idx], k-1, nums, ds, ans);
            ds.pop_back();
        findCombSum(idx+1, n, k, nums, ds, ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        vector<vector<int>> ans;
        findCombSum(0, n, k, nums, ds, ans);
        return ans;
    }
};