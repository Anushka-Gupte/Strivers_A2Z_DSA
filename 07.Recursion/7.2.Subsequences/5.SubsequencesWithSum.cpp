class Solution{
    public: 
    int countSubSum(vector<int>& nums,int k,int idx,vector<int>& ans) {
        int l = 0;
        if(idx == nums.size()) {
            int sum = 0;
            for(int el : ans) {
                sum += el;
            }
            if(sum == k) return 1;
            else return 0;
        }
            ans.push_back(nums[idx]);
            l += countSubSum(nums,k,idx+1,ans);
            ans.pop_back();
             l += countSubSum(nums,k,idx+1,ans);
        return l;
    }   	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        vector<int> ans;
    	return countSubSum(nums,k,0,ans);
    }
};