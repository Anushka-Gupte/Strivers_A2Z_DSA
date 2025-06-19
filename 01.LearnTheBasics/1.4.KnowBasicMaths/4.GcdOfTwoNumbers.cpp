class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd=(n1<n2)?n1:n2;
        
        while(n1%gcd!=0 || n2%gcd!=0) {
            gcd--;
        }
        return gcd;
    }
};