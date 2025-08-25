class Solution {
  public:
    void sum(int idx, int subSum, vector<int>& nums, vector<int>& ds) {
        if(idx == nums.size()) {
          ds.push_back(subSum);
          return;
        }

        sum(idx+1, subSum+nums[idx], nums, ds);

        sum(idx+1, subSum, nums, ds);
    }
    vector<int> subsetSums(vector<int>& nums) {
        //your code goes here
        vector<int> ds;
        sum(0,0,nums,ds);
        return ds;
    }
};1