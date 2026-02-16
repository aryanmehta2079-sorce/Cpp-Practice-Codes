#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int check = 0;
void primeFactors(vector<int>&v,int n){
    v.push_back(1);
    v.push_back(n);
    if(n<=1)return;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
}
int main(){
    vector<int>v;
    primeFactors(v,60);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}