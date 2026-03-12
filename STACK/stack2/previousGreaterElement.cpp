#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void previousGreaterElement(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    arr[0] = -1;
    int i = 1;
    while(i<n){
    while(s.size()>0 && s.top()<=arr[i])s.pop();
    int x = arr[i];
    if(s.empty()) arr[i] = -1;
    else arr[i] = s.top();
    s.push(x);
    i++;
    }
    
}
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    previousGreaterElement(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}