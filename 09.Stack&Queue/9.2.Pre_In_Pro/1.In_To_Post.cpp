#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int priority(char op) {
    if(op == '^') return 3;
    else if(op == '+' || op == '-') return 1;
    else if(op == '*' || op == '/' || op == '%') return 2;
    else return -1;
}

string InPost(string inf) {
    stack<char> st;
    string postf = "";
    for(int i=0;i<inf.length();i++) {
        if((inf[i] >= 'A' && inf[i] <= 'Z') || (inf[i] >= 'a' && inf[i] <= 'z') || (inf[i] >= '0' && inf[i] <= '9')) {
            postf += inf[i];
        }
        else if(inf[i] == '(') st.push(inf[i]);
        else if(inf[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                postf += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            if(st.empty() || priority(st.top()) < inf[i]) {
                st.push(inf[i]);
            }
            else {
                postf += st.top();
                st.pop();
                i--;
                continue;
            }
        }
    }
    while(!st.empty()) {
        postf += st.top();
        st.pop();
    }
    return postf;
}