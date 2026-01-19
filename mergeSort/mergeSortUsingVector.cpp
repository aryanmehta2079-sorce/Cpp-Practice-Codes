#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&nums,vector<int>&v1,vector<int>&v2){
    int i = 0;
    int n1 = v1.size();
    int j = 0;
    int n2 = v2.size();
    int k = 0;
    while(i<n1 && j<n2){
        if(v1[i]<=v2[j]){
            nums[k++] = v1[i++];
        }
        else{
            nums[k++] = v2[j++];
        }
    }
    while(i<n1){
        nums[k++] = v1[i++];
    }
    while(j<n2){
        nums[k++] = v2[j++];
    }
}

void mergeSort(vector<int>&nums){
    int n = nums.size();
    if(n==0 || n==1){
        return;
    }
    vector<int>v1(n/2);
    vector<int>v2(n - n/2);
    for(int i = 0;i<n/2;i++){
        v1[i] = nums[i];
    }
    int k = 0;
    for(int i = n/2;i<n;i++){
        v2[k++] = nums[i];
    }
    mergeSort(v1);
    mergeSort(v2);
    merge(nums,v1,v2);

}

int main(){
    int arr[] = {5,1,1,6,2,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+size);
    mergeSort(nums);
    for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}