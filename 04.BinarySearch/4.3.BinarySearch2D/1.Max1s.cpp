class Solution {
  public:  
  int firstOcc(vector<int> arr) {
    int low=0,high=arr.size()-1;
    while(low<=high) {
      int mid=low+(high-low)/2;

      if(arr[mid]==1) {
        high=mid-1;
      }
      else {
        low=mid+1;
      }
    }
    return low;
  } 

  int rowWithMax1s(vector < vector < int >> & mat) {
    int n=mat.size();
    int maxSum=0,idx=-1;
    for(int i=0;i<n;i++) {
      int m=mat[i].size();
      int count = m-firstOcc(mat[i]);
      if(count > maxSum) {
        maxSum=count;
        idx=i;
      }
    }
    return idx;
  }
};