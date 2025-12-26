class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        for(int i=0;i<heights.size();i++) {
            while(!st.empty() && heights[st.top()] > heights[i]) {
                int elt = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea,(nse-pse-1)*heights[elt]);
            }
            st.push(i);
        }
        while(!st.empty()) {
            int elt = st.top();
            st.pop();
            int nse = heights.size();
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea,(nse-pse-1)*heights[elt]);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> pSum(n,vector<int>(m,0));
        for(int j=0;j<m;j++) {
            int sum = 0;
            for(int i=0;i<n;i++) {
                sum += matrix[i][j] - '0';
                if(matrix[i][j] == '0') sum = 0;
                pSum[i][j] = sum;
            }
        }
        int maxArea = 0;
        for(int i=0;i<n;i++) {
            maxArea = max(maxArea,largestRectangleArea(pSum[i]));
        }
        return maxArea;
    }
};