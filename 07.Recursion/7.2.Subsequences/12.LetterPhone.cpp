class Solution {
public:
    vector<string> letters(char digits) {
        if(digits == '0') return {"0"};
        else if(digits == '1') return {"1"};
        else if(digits == '2') return {"a","b","c"};
        else if(digits == '3') return {"d","e","f"};
        else if(digits == '4') return {"g","h","i"};
        else if(digits == '5') return {"j","k","l"};
        else if(digits == '6') return {"m","n","o"};
        else if(digits == '7') return {"p","q","r","s"};
        else if(digits == '8') return {"t","u","v"};
        else if(digits == '9') return {"w","x","y","z"};
        return {};
    }
    void helper(string s, int idx, string& ans, vector<string>& ds) {
        if(idx == s.length()) {
            if(ans != "") ds.push_back(ans);
            return;
        }
        for(string el : letters(s[idx])) {
            ans += el;
            helper(s,idx+1,ans,ds);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ds;
        string ans = "";
        helper(digits,0,ans,ds);
        return ds;
    }
};