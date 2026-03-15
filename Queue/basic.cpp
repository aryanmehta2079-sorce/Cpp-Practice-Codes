#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void reverse(queue<int>q){
    if(q.size()==0)return;
    int x = q.front();
    q.pop();
    reverse(q);
    cout<<x<<" ";
}
void display(queue<int>q){
    if(q.size()==0)return;
    cout<<q.front()<<" ";
    q.pop();
    display(q);
}
int main(){
    queue<int>q;
    vector<int>v;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // cout<<v.back()<<endl;
    // cout<<q.back();
    // display(q);
    reverse(q);
}