#include<iostream>
using namespace std;
// int reversePair(int arr[],int n){
//     int count = 0;
//     for(int i = 0;i<n;i++){
//         for (int j = i+1;j<n;j++){
//             if (arr[i]>2*arr[j]) count++;
//         }
//     }
//     return count;
// }

int ans = 0;
void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;

    while(i<=mid && j<=high){
        if(arr[i]>2*arr[j]){
            ans = ans + mid-i+1;
            j++;
        }
        else i++;
    }

    i = low;
    j = mid+1;
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

    for(int i = low;i<=high;i++){
        arr[i] = result[i-low];
    }
    delete[] result;
}

void mergeSort(int arr[],int low,int high){
    if(low==high) return;
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);


}
int main(){
    int arr[] = {1,3,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    cout<<ans;
}