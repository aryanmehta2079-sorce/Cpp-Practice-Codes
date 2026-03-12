#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
void pushAtBottom(stack<char>&st,char s){
    if(st.size()==0){
        st.push(s);
        return;
    }
    char ss = st.top();
    st.pop();
    pushAtBottom(st,s);
    st.push(ss);
}
void reverseStack(stack<char>&st){
    if(st.size()==1)return;
    char s = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,s);
}
vector<char>removeConsecutiveDuplicates(string s){
    stack<char>st;
    int i = 0;
    while(i<s.size()){
        if(st.empty())st.push(s[i]);
        else if(st.top()!=s[i])st.push(s[i]);
        i++;
    }
    reverseStack(st);
    i = 0;
    vector<char>ss;
    while(st.size()){
        ss.push_back(st.top());
        st.pop();
    }
    // reverse(ss.begin(),ss.end());
    return ss;
}
int main(){
    string s = "aaabbcddaabffg";
    vector<char>ss;
    ss = removeConsecutiveDuplicates(s);
    for(int i = 0;i<ss.size();i++){
        cout<<ss[i];
    }
}