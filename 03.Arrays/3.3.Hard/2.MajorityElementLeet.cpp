class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(count1==0 && el2!=nums[i]) {
                count1=1;
                el1=nums[i];
            }
            else if(count2==0 && el1!=nums[i]) {
                    count2=1;
                    el2=nums[i];
            }
            else if(el1==nums[i]) count1++;
            else if(el2==nums[i]) count2++;
            else {
                count1--, count2--;
            }
        }
        int minm = (int)(nums.size())/3 +1;
        count1 = 0, count2 = 0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            if(el1==nums[i]) count1++;
            if(el2==nums[i]) count2++;
        }
        if(count1 >= minm) ans.push_back(el1);
        if(count2 >= minm) ans.push_back(el2);
        return ans;
    }
};