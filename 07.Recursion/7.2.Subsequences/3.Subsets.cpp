class Solution {
public:
    void printSubsequences(int idx, vector<int>& nums, vector<vector<int>>& ds, vector<int>& st) {
        if(idx == nums.size()) {
            ds.push_back(st);
            return;
        }
        st.push_back(nums[idx]);
        printSubsequences(idx+1, nums, ds, st);
        st.pop_back();
        printSubsequences(idx+1, nums, ds, st);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ds;
        vector<int> st;
        printSubsequences(0, nums, ds, st);
        return ds;
    }
};