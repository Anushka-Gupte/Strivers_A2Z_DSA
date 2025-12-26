class Solution {
public:
    vector<int> findNSE(vector<int> arr) {
        stack<int> st;
        vector<int> nse(arr.size());
        for(int i=arr.size()-1;i>=0;i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(st.empty()) nse[i] = arr.size();
            else nse[i] = st.top();
            
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSE(vector<int> arr) {
        stack<int> st;
        vector<int> pse(arr.size());
        for(int i=0;i<arr.size();i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int total = 0,mod = 1e9+7;
        vector<int> nse = findNSE(arr);
        vector<int> pse = findPSE(arr);
        for(int i=0;i<arr.size();i++) {
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total + (right*left*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};