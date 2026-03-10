#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.size()%2!=0)return false;
    stack<char>st;
    int i = 0;
    while(i<s.size()){
        if(s[i]=='(')st.push('(');
        if(s[i]==')'){
            if(st.empty())return false;
            st.pop();
        }
        i++;
    }
    if(st.size()==0)return true; //1
    else return false; //0
}
int main(){
    string s = "((()))";
    cout<<isBalanced(s);
}