class Solution {
public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
        //your code goes here
        int subsets = 1 << nums.size();
        vector<vector<int>> ans;
        for(int num = 0;num<subsets;num++) {
            vector<int> ps;
            for(int i=0;i<nums.size();i++) {
                if((num & (1 << i))) ps.push_back(nums[i]);
            }
            ans.push_back(ps);
        }
        return ans;
    }
};