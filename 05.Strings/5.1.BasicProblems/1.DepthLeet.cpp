class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened = 0;
        string res = "";
        for(int i=0;i<s.length();i++) {
            if(s[i] == '(' && opened > 0) res+=s[i];
            if(s[i] == ')' && opened > 1) res+=s[i];
            opened += (s[i]=='(')?  1 : -1;
        }
        return res;
    }
};