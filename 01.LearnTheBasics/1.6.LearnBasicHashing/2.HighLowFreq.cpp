class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int smallestNum = INT_MAX, freq=INT_MIN ;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            if(it.second > freq) {
                freq = it.second;
                smallestNum = it.first;
            }
            else if(it.second == freq) {
                smallestNum = min(smallestNum,it.first);
            }
        }
        return smallestNum;
    }
};