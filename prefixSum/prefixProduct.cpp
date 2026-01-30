#include<iostream>
using namespace std;
void prefixProduct(int arr[],int n){
    for(int i = 1;i<n;i++){
        arr[i] *= arr[i-1];
    }
}
void suffixProduct(int arr[],int n){
    for(int i = n-2;i>=0;i--){
        arr[i] *= arr[i+1];
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    suffixProduct(arr,n); 
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}