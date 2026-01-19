#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = 0;
    int *result = new int[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            result[k] = arr[i];
            k++;
            i++;
        }
        else{
            result[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        result[k] = arr[i];
            k++;
            i++;
    }
    while(j<=high){
        result[k] = arr[j];
            k++;
            j++;
    }

    for(int i = 0;i<(high-low+1);i++){
        arr[i+low] = result[i];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}

int main(){
    int arr[] = {5,1,1,6,2,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    // vector<int>nums(arr,arr+size);
    // quickSort(arr);
    mergeSort(arr,0,size-1);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}