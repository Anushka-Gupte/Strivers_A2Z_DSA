#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string PrePost(string pref) {
   stack<string> st;
   for(int i=pref.length()-1;i>=0;i--) {
       if((pref[i] >= 'A' && pref[i] <= 'Z') || (pref[i] >= 'a' && pref[i] <= 'z') || (pref[i] >= '0' && pref[i] <= '9')) {
           st.push(string(1,pref[i]));
       }
       else {
           string t1 = st.top();
           st.pop();
           string t2 = st.top();
           st.pop();
           string postf = t1 + t2 + pref[i];
           st.push(postf);
       }
   }
   return st.top();
}

