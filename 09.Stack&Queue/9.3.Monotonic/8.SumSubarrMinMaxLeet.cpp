class Solution {
public:
    vector<int> findPSE(vector<int> nums) {
        stack<int> st;
        vector<int> pse(nums.size());
        for(int i=0;i<nums.size();i++) {
            while(!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            
            st.push(i);
        }
        return pse;
    }
    vector<int> findNSE(vector<int> nums) {
        stack<int> st;
        vector<int> nse(nums.size());
        for(int i=nums.size()-1;i>=0;i--) {
            while(!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if(st.empty()) nse[i] = nums.size();
            else nse[i] = st.top();
            
            st.push(i);
        }
        return nse;
    }
    vector<int> findNGE(vector<int> nums) {
        stack<int> st;
        vector<int> nge(nums.size());
        
        for(int i=nums.size()-1;i>=0;i--) {
            while(!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if(st.empty()) nge[i] = nums.size();
            else nge[i] = st.top();
            
            st.push(i);
        }
        return nge;
    }
    vector<int> findPGE(vector<int> nums) {
        stack<int> st;
        vector<int> pge(nums.size());
        
        for(int i=0;i<nums.size();i++) {
            while(!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            if(st.empty()) pge[i] = -1;
            else pge[i] = st.top();
            
            st.push(i);
        }
        return pge;
    }
    long long subArrMin(vector<int> nums) {
        long long total = 0;
        vector<int> pse = findPSE(nums);
        vector<int> nse = findNSE(nums);
        
        for(int i=0;i<nums.size();i++) {
            int left = i - pse[i];
            int right = nse[i] - i;
            total += (right*1LL*left*nums[i]);
        }
        return total;
    }
    long long subArrMax(vector<int> nums) {
        long long total = 0;
        vector<int> pge = findPGE(nums);
        vector<int> nge = findNGE(nums);
        
        for(int i=0;i<nums.size();i++) {
            int left = i - pge[i];
            int right = nge[i] - i;
            
            total += (right*1LL*left*nums[i]);
        }
        return total;
    }
    long long subArrayRanges(vector<int>& nums) {
        return subArrMax(nums) - subArrMin(nums);
    }
};