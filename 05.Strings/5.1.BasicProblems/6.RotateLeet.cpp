class Solution {
public:
    bool rotateString(string s, string goal) {
        cout<<boolalpha;
        for(int i=0;i<s.length();i++) {
            if(s == goal) return true;
            else {
                char temp = s[0];
                for(int i=0;i<s.length();i++) {
                    s[i] = s[i+1];
                }
                s[s.length()-1] = temp;
                if(s == goal) return true;
            }
        }
        return false;
    }
};
