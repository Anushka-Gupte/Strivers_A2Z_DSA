class Solution {
public:
    vector<int> ansRow(int row) {
        vector<int> ans;
        long long mul = 1;
        ans.push_back(1);
        for(int col=1;col<row;col++) {
            mul = mul * (row-col);
            mul = mul / col;
            ans.push_back(mul);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> triangle;
        for(int i=1;i<=numRows;i++) {
            triangle.push_back(ansRow(i));
        }
        return triangle;
    }
};