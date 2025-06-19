class Solution {
public:
    int countDigit(int n) {
         int count=0;
        if (n==0) {
            return 1;
        } else {
            while (n!=0) {
                n/=10;
                count++;
            }
            return count;
        }
    }
};
