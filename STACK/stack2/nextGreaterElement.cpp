#include<iostream>
#include<stack>
using namespace std;
void nextElement(int arr[],int n){
    stack<int>s;
    s.push(arr[n-1]);
    arr[n-1] = -1;
    int i = n-2;
    while(i>=0){
    while(s.size()>0 && s.top()<=arr[i]){
        s.pop();
    }
    int x = arr[i];
    if(s.size()>0)arr[i] = s.top();
    else arr[i] = -1;
    s.push(x);
    i--;
    }

}
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextElement(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}