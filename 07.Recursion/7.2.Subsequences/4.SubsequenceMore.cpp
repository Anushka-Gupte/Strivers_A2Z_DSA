class Solution {
public:
    int func(int idx,string s,int n,string ans) {
        int l = 0;
        if(idx == n) {
            return 1;
        }
        for(int i=idx;i<n;i++) {
            if(i == idx && s[i] == s[i-1]) continue;
            ans += s[i];
            l += func(i+1,s,n,ans);
            ans.pop_back();
        }
        return l;
    }
    string moreSubsequence(int n,int m,string a,string b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(func(0,a,n,"") >= func(0,b,m,"")) {
            return a;
        }
        else return b;
    }
};