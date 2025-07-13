class Solution {
public:
    string longestPalindrome(string s) {
        string maxi = "";
        int maxLen = 0;
        for(int i=0;i<s.length();i++) {
            for(int j=0;j<=1;j++) {
                int low = i, high = i+j;
                while(low >=0 && high < s.length() && s[low] == s[high]) {
                    if(high - low +1 > maxLen) {
                        maxi = s.substr(low, high-low+1);
                        maxLen = max(maxLen, high-low+1);
                    }
                    low -= 1;
                    high += 1;
                }
            }
        }
        return maxi;
    }
};