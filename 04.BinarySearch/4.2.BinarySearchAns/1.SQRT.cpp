class Solution {
public:
    int mySqrt(int x) {
        int st=0,end=x,sqrtNum;
        long long mid;
        while(st<=end) {
            mid=(st+end)/2;
            if(mid*mid<=x) {
                sqrtNum=mid;
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return sqrtNum;
    }
};