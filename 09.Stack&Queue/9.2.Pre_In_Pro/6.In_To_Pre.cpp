#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int priority(char op) {
    if(op == '^') return 3;
    else if(op == '+' || op == '-') return 1;
    else if(op == '*' || op == '/' || op == '%') return 2;
    else return -1;
}

string InPre(string inf) {
    stack<char> st;
    string pref = "";
    for(int i=inf.length()-1;i>=0;i--) {
        if((inf[i] >= 'A' && inf[i] <= 'Z') || (inf[i] >= 'a' && inf[i] <= 'z') || (inf[i] >= '0' && inf[i] <= '9')) {
            pref += inf[i];
        }
        else if(inf[i] == ')') st.push(inf[i]);
        else if(inf[i] == '(') {
            while(!st.empty() && st.top() != ')') {
                pref += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            if(st.empty() || priority(st.top()) <= inf[i]) {
                st.push(inf[i]);
            }
            else {
                pref += st.top();
                st.pop();
                i--;
                continue;
            }
        }
    }
    while(!st.empty()) {
        pref += st.top();
        st.pop();
    }
    for(int i=0;i<pref.length()/2;i++) {
        char ch = pref[i];
        pref[i] = pref[pref.length()-1-i];
        pref[pref.length()-1-i] = ch;
    }
    return pref;
}