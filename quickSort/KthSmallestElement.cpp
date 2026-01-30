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

int QS(int arr[],int low, int high, int k){
    int m = partation(arr,low,high);
    if ((m+1)==k) return arr[m];
    else if((m+1)<k) return QS(arr,m+1,high,k);
    else QS(arr,low,m-1,k);

}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<QS(arr,0,n-1,k);
}