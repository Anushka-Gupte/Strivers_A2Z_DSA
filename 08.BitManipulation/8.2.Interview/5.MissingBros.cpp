class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XOR = 0;
        int b1 = 0, b2 = 0;
        for(int el : nums) {
            XOR = XOR ^ el;
        }
        int rightmost_set_bit = ((XOR & (XOR-1)) ^ XOR);
        for(int el : nums) {
            if(rightmost_set_bit & el) b1 = b1 ^ el;
            else b2 = b2 ^ el;
        }
        return {b1,b2};
    }
};