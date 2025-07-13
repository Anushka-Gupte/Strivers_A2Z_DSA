class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i] == '(') {
                depth++;
                if(depth>0) ans=max(ans,depth);
            }
            else if(s[i] == ')') depth--;
        }
        return ans;
    }
};