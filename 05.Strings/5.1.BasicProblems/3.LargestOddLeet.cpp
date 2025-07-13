class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.length()-1;i>=0;i--) {
            if((num[i] - '0')%2!=0) return ans = num.substr(0,i+1);
        }
        return ans;
    }
};