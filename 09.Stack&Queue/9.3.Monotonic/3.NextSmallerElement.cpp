class Solution {
public:
    vector<int> prevSmaller(vector<int> nums) {
        stack<int> st;
        vector<int> nse(nums.size());
        for(int i=0;i<nums.size();i++) {
            while(!st.empty() && st.top() >= nums[i]) {
                st.pop();
            }
            if(st.empty()) {
                nse[i] = -1;
            }
            else nse[i] = st.top();
            
            st.push(nums[i]);
        }
        return nse;
    }
};