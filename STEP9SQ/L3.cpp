#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPostfix(string s){
    int i=0;stack<char> st;string ans="";
    while(i<s.size()){
        if(isalnum(s[i])){
            ans+=s[i];
        }
        else if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
               ans+=st.top();
               st.pop(); 
            }
            st.pop();
        }
        else {
            while (!st.empty() && ((priority(s[i]) < priority(st.top())) || (priority(s[i]) == priority(st.top()) && s[i] != '^'))) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    return ans;
}

string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    stack<char> st; string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') s[i]==')';
        if(s[i]==')') s[i]=='(';

        //main
        if(isalnum(s[i])) ans+=s[i];
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(s[i]=='^'){
                while(!st.empty()&&(priority(s[i])<=priority(st.top()))){
                   ans=ans+st.top();
                   st.pop();
                }
            }
            else{
               while(!st.empty()&&(priority(s[i])<=priority(st.top()))){
                   ans=ans+st.top();
                   st.pop();
                } 
            }
            st.pop();
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    int j=0;
    while(j<ans.size()){
        if(ans[j]=='(') ans[j]=')';
        if(ans[j]==')') ans[j]='(';
        j++;
    }
    return ans;
} 

//video is incomplete;
int main(){
    cout << infixToPostfix("a+b*(c^d-e)^(f+g*h)-i") << endl;
    cout << infixToPostfix("a^b^c") << endl;
}