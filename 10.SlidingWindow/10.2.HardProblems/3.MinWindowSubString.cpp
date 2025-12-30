class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0, cnt = 0, minLen = INT_MAX, stIdx = -1;
        vector<int> hash(256,0);
        int m = t.length();
        for(int i=0;i<m;i++) {
            hash[t[i]]++;
        }
        while(r < s.length()) {
            if(hash[s[r]] > 0)
                cnt += 1;
            hash[s[r]]--;
            while(cnt == m) {
                if(r-l+1 < minLen) {
                    minLen = r-l+1;
                    stIdx = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) cnt -= 1;
                l += 1;
            }
            r += 1;
        }
        return stIdx == -1 ? "" : s.substr(stIdx,minLen);
    }
};