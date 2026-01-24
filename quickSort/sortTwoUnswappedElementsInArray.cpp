#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    int front = -1;
    int back = -1;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            front = i;
            break;
        }
    }
    for(int i = n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            back = i;
            break;
        }
    }
    swap(arr[front],arr[back]);
}
int main(){
    int arr[] = {3,8,6,7,5,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}