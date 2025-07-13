class Solution {
public:
    bool isFreqSame(int freqS[26],int freqT[26]) {
        cout<<boolalpha;
        for(int i=0;i<26;i++) {
            if(freqS[i] != freqT[i]) return false;
        }
        return true;
    }

    bool isAnagram(string s, string t) {
        cout<<boolalpha;
        int freqS[26] = {0};
        for(int i=0;i<s.length();i++) {
            freqS[s[i] - 'a']++;
        }
        int freqT[26] = {0};
        for(int i=0;i<t.length();i++) {
            freqT[t[i] - 'a']++;
        }
        if(isFreqSame(freqS,freqT)) return true;
        return false;
    }
};