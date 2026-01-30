// Divide array into two so that half array sum = another array sum
#include<iostream>
using namespace std;
bool checkPartitionArrayOfEqualSum(int arr[],int n){
    for(int i = 1;i<n;i++){
        arr[i] += arr[i-1];
    }
    for(int i = 1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<checkPartitionArrayOfEqualSum(arr,n);

}