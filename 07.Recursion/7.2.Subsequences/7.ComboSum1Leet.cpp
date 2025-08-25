class Solution {
public:
    void findCombination(int idx, vector<int>& candidates, int target, vector<int>& ans, vector<vector<int>>& ds) {
        if(idx == candidates.size()) {
            if(target == 0) {
                ds.push_back(ans);
            }
            return;
        }
        if(candidates[idx] <= target) {
            ans.push_back(candidates[idx]);
            findCombination(idx, candidates, target - candidates[idx], ans, ds);
            ans.pop_back();
        }
        findCombination(idx+1, candidates, target, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ds;
        vector<int> ans;
        findCombination(0, candidates, target, ans, ds);
        return ds;
    }
};