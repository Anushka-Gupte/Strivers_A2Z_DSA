// class Solution {
// public:
//     bool func(int idx, string s, vector<string>& wordDict) {
//         cout<<boolalpha;
//         if(idx == s.length()) {
//             return true;
//         }
//         string prefix = "";
//         for(int i = idx;i<s.length();i++) {
//             prefix += s[i];
            
//             if(find(wordDict.begin(),wordDict.end(),prefix) != wordDict.end() && func(i+1,s,wordDict)) {
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         return func(0,s,wordDict);
//     }
// };