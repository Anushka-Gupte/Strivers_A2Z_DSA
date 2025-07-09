class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long mul = 1;
        ans.push_back(1);
        for(int col=1;col<=rowIndex;col++) {
            mul = mul * (rowIndex-col+1);
            mul = mul / col;
            ans.push_back(mul);
        }
        return ans;
    }
};