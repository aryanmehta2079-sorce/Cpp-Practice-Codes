// Divide array into two so that half array sum = another array sum
#include<iostream>
using namespace std;
bool checkPartitionArrayOfEqualSum(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        arr[i] += arr[i-1];
    }
    if (arr[n-1]%2==0) return true;
    else return false;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<checkPartitionArrayOfEqualSum(arr,n);

}