//BRUTE FORCE METHOD

// #include<iostream>
// using namespace std;

// int countInversion(int arr[],int n){
//     int count = 0;
//     for(int i = 0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]>arr[j])count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int arr[] = {5,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int count = countInversion(arr,n);
//     cout<<count;
// }


//OPTIMAL SOLUTION

#include<iostream>
#include<vector>
using namespace std;

int count = 0;

int inversion(vector<int>a,vector<int>b){
    int c = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += (a.size()-1);
            j++;
        }else{
            i++;
        }
    }
    return c;
}

void mergeSort(vector<int>arr){
    int n = arr.size();
    if(n==1)return;
    vector<int>a(n/2);
    vector<int>b(n-n/2);
    for(int i = 0;i<n/2;i++){
        a[i] = arr[i];
    }
    for(int j = 0;j<n-n/2;j++){
        b[j] = arr[j+n/2];
    }
    mergeSort(a);
    mergeSort(b);

    count += inversion(a,b);

}

int main(){
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    mergeSort(v);
    cout<<count;
}
