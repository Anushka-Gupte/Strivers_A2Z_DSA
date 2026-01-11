class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mpp) {
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(k--) {
            pair<int,int> ele = pq.top();
            pq.pop();
            ans.push_back(ele.second);
        }
        return ans;
    }
};

// https://leetcode.com/problems/top-k-frequent-elements/