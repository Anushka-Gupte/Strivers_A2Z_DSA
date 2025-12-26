class Solution {
public:
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> mpp;
       stack<int> st;
       for(int i=nums2.size()-1;i>=0;i--) {
           if(find(nums1.begin(),nums1.end(),nums2[i]) != nums1.end()) {
               while(!st.empty() && st.top() <= nums2[i]) {
                   st.pop();
               }
               if(st.empty()) mpp[nums2[i]] = -1;
               else mpp[nums2[i]] = st.top();
           }
           st.push(nums2[i]);
       }
       vector<int> nge;
       for(int i=0;i<nums1.size();i++) {
           nge.push_back(mpp[nums1[i]]);
       }
       return nge;
   }
};
