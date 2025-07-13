class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int idx = min(first.length(),last.length());
        int i;
        for(i=0;i<idx;i++) {
            if(first[i]!=last[i]) break;
        }
        if(i!=0) return first.substr(0,i);
        return "";
    }
};