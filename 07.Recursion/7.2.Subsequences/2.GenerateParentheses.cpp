class Solution {
public:
    void gen(int op,int close, string& ans, vector<string>& ds ,int n) {
        if(op == n && close == n) {
            ds.push_back(ans);
            return;
        }
        if(op < n) {
            ans += "(";
            gen(op+1,close,ans,ds,n);
            ans.pop_back();
        }
        if(close < op) {
            ans += ")";
            gen(op,close+1,ans,ds,n);
            ans.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string ans = "";
        vector<string> ds;
        gen(0,0,ans,ds,n);
        return ds;
    }
};