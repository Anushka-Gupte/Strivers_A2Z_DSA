class Solution {
public:
    bool check(vector<int>& nums) {
        cout<<boolalpha;
        int n=nums.size();
        if(n==1) return true;
        int count=0;
        for(int i=1;i<n;i++) {
            if(i==(n-1)){
                if(nums[i]>nums[0]) {
                    count++;
                }
            } 
            if(nums[i-1] > nums[i]) count++;
        }
        if(count<=1) return true;
        else return false;
    }
};