class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ans.push_back(temp);
        }
        return ans;
    }
};