class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool power=false;
        if((n>0) && ((n & (n-1))==0))
            power=true;
        cout<<boolalpha;
        return power;
    }
};