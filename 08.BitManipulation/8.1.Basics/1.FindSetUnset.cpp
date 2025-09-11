class Solution {
public:
    vector<int> bitManipulation(int num, int i) {
        int n = num;
        vector<int> ans;
        ans.push_back(n >> (i-1) & 1);
        ans.push_back(num | (1 << (i-1)));
        ans.push_back(num & ~(1 << (i-1)));
        return ans;
    }
};