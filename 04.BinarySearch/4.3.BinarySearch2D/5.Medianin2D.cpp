class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low=0,high=nums.size()-1;
        int ans=nums.size();
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(nums[mid] > x) {
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }

    int countSmallEqual(vector<vector<int>> matrix,int mid) {
        int n=matrix.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            count+=upperBound(matrix[i],mid);
        }
        return count;
    }

    int findMedian(vector<vector<int>>&matrix) {
      int low = INT_MAX, high =INT_MIN;
      int n = matrix.size();
      int m =matrix[0].size();
      for(int i=0;i<n;i++) {
        low=min(low,matrix[i][0]);
        high=max(high,matrix[i][m-1]);
      }
      int req = (n*m)/2;
      while(low<=high) {
        int mid = low+(high-low)/2;
        int smallEqual = countSmallEqual(matrix,mid);
        if(smallEqual <= req) low=mid+1;
        else high=mid-1;
      }
      return low;
    }
};