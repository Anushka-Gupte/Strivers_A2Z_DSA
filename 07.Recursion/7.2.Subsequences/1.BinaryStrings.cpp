class Solution {
public:
    void genBinary(int n, int len, string s, vector<string>& ans){
        if(n==len) {
            ans.push_back(s);
            return;
        }
        if(s[len-1] == '1') {
            s += '0';
            genBinary(n,len+1,s,ans);
        }
        if(s[len-1] == '0') {
            s += '0';
            genBinary(n,len+1,s,ans);
            s.pop_back();
            s += '1';
            genBinary(n,len+1,s,ans);
        }
    }
    vector<string> generateBinaryStrings(int n) {
        // Your code goes here
        vector<string> ans;
       if(n ==0) return ans;
       
       string s1 = "0";
       genBinary(n,1,s1,ans);
       
       string s2 = "1";
       genBinary(n,1,s2,ans);
       sort(ans.begin(),ans.end());
       return ans;
    }
};
