class Solution {
public:
    bool checkKthBit(int n, int k) {
        // Your code goes here
        cout<<boolalpha;
        if((n & (1 << k)) != 0) return true;
        return false;
    }
};