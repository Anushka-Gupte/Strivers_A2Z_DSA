class Solution {
public:
    int at_most(string str, int k) {
        if(str.length() == 0) return 0;
        unordered_map<char, int> char_count;
        int left = 0, count = 0;
        for(int i=0;i<str.length();i++) {
            char_count[str[i]]++;
            while(char_count.size() > k) {
                char_count[str[left]] -= 1;
                if(char_count[str[left]] ==0) {
                    char_count.erase(str[left]);
                }
                left+=1;
            }
            count += i - left + 1;
        }
        return count;
    }
    int countSubStrings(string str, int k) {
        return at_most(str, k) - at_most(str, k-1);
    }  
};