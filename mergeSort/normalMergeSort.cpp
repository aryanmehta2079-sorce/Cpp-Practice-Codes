#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = 0;
    // vector<int>v(high-low+1);
    // while(i<=mid && j<=high){
    //     if(arr[i]<=arr[j]){
    //         v[k++] = arr[i++];
    //     }
    //     else v[k++] = arr[j++];
    // }

    // while(i<=mid){
    //     v[k++] = arr[i++];
    // }
    // while(j<=high){
    // v[k++] = arr[j++];
    // }

    // for(int i = 0;i<v.size();i++){
    //     arr[i+low] = v[i];
    // }
    // v.clear();

    int size = high-low+1;
    int* v = new int[size];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            v[k++] = arr[i++];
        }
        else v[k++] = arr[j++];
    }

    while(i<=mid){
        v[k++] = arr[i++];
    }
    while(j<=high){
    v[k++] = arr[j++];
    }

    for(int i = 0;i<size;i++){
        arr[i+low] = v[i];
    }

    delete v;

}

void mergeSort(int arr[],int low,int high){
    if(low>=high)return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int a[] = {1,8,2,6,3,5,7,8,2,74,2,4,6,0};
    int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}