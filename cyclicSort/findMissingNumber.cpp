#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,2,3,4,6,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<n){
        int correctIndex = arr[i] - 1;
        if(correctIndex==i || correctIndex==n) i++;
        else swap(arr[i],arr[correctIndex]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]-1!=i){
            cout<<i+1;
            break;
        }
    }
}