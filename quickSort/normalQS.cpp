#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partation(int arr[],int low,int high){
    int i = low;
    int j = low+1;
    int pivot = arr[low];
    while(j<=high){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[low],arr[i]);
    return i;
}

void QS(int arr[],int low, int high){
    if(low<high){
    int m = partation(arr,low,high);
    QS(arr,low,m-1);
    QS(arr,m+1,high);
    }
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    QS(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}