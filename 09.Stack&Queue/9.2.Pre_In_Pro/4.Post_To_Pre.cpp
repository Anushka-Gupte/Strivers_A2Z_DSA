#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string PostPre(string postf) {
   stack<string> st;
   for(int i=0;i<postf.length();i++) {
       if((postf[i] >= 'A' && postf[i] <= 'Z') || (postf[i] >= 'a' && postf[i] <= 'z') || (postf[i] >= '0' && postf[i] <= '9')) {
           st.push(string(1,postf[i]));
       }
       else {
           string t1 = st.top();
           st.pop();
           string t2 = st.top();
           st.pop();
           string pref = postf[i] + t2 + t1;
           st.push(pref);
       }
   }
   return st.top();
}

