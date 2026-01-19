#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partation(vector<int>&v,int low,int high){
    int i = low;
    int j = low+1;
    int pivot = v[low];
    while(j<=high){
        if(v[j]>pivot){
            i++;
            swap(v[i],v[j]);
        }
        j++;
    }
    swap(v[low],v[i]);
    return i;
}

int quickSort(vector<int>&v,int low,int high,int k){
        if (low<=high){
        int m = partation(v,low,high);
        if(m==k-1) return v[m];
        else if(m<k-1) return quickSort(v,m+1,high,k);
        else return quickSort(v,low,m-1,k);
        }
        
}

int QS(vector<int>&v,int k){
    if (v.size()<=1)return v[0];
    return quickSort(v,0,v.size()-1,k);

}

int main(){
    int arr[] = {5,8,2,7,6,3,4};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<QS(v,k);
}