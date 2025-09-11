class Solution {
public:
    int setBits(int n) {
        if((n & (n+1)) == 0) return n;
        else {
            return (n | (n+1));
        }
    }
};