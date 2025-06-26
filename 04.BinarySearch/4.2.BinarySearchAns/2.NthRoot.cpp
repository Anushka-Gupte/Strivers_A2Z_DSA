class Solution {
public:
    int func(int mid,int N,int M) {
        long long ans=1;
        for(int i=1;i<=N;i++) {
            ans=ans*mid;
            if(ans > M) return 2;
        }
        if(ans==M) return 1;
        return 0;
    }
  int NthRoot(int N, int M) {
       int low=1,high=M;
       while(low<=high) {
           int mid=low+(high-low)/2;
           int ans=func(mid,N,M);
           if(ans == 1) return mid;
           
           else if(ans == 2) {
               high=mid-1;
           }
           else {
               low=mid+1;
           }
       }
       return -1;
    }
};
