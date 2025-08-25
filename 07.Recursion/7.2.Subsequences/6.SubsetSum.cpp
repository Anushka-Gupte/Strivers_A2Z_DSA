class Solution{
    public:
    bool subSum(vector<int>& nums,int k,vector<int>& ans,int idx) {
        cout<<boolalpha;
        if(idx == nums.size()) {
            int sum = 0;
            for(int el : ans) {
                sum += el;
            }
            if(sum == k) return true;
            return false;
        }
        ans.push_back(nums[idx]);
        if(subSum(nums,k,ans,idx+1) == true) return true;
        ans.pop_back();
        if(subSum(nums,k,ans,idx+1) == true) return true;
        return false;
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         //your code goes here
         cout<<boolalpha;
         vector<int> ans;
         return subSum(nums,k,ans,0);
    }
};