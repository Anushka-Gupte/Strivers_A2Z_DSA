class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp=nums[0];
        for(int i=1;i<n;i++) {
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }
};