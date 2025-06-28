class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        cout<<boolalpha;
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=(m*n-1);
        while(low<=high) {
            int mid = low+(high-low)/2;
            int row = mid/m;
            int col = mid%m;
            if(target==mat[row][col]) return true;
            else if(target > mat[row][col]) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};