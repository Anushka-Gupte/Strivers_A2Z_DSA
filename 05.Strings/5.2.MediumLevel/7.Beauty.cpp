class Solution {
public:
    int beautySum(string s) {
         int ans = 0;
        for(int i=0;i<s.length();i++) {
            for(int j=i;j<s.length();j++) {
                 int freq[26] = {0};
                bool checked[26] = {false};
                for(int l=i;l<=j;l++) {
                    freq[s[l] - 'a']++;
                    checked[s[l] - 'a'] = true;
                }
                    int maxel =0;
                    for(int k=0;k<26;k++) {
                        if(checked[k]) maxel = max(maxel,freq[k]);
                    }
                    int minel = INT_MAX;
                    for(int k=0;k<26;k++) {
                        if(checked[k]) minel = min(minel,freq[k]);
                    }
                    ans += maxel -minel;
            }
        }
        return ans;
    }
};