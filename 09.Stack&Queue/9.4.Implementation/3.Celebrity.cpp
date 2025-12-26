class Solution {
public:
    int findCelebrity(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int top = 0, down = n-1;
        while(top < down) {
            if(matrix[top][down] == 1) top = top + 1;
            else if(matrix[down][top] == 1) down = down - 1;
            else {
                top++;
                down--;
            }
        }
        if(top > down) return -1;
        for(int i=0;i<n;i++) {
            if(i == top) continue;
            if(matrix[top][i] == 0 && matrix[i][top] == 1) {}
            else return -1;
        }
        return top;
    }
};