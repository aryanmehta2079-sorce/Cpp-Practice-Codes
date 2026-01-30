#include<iostream>
#include<vector>
using namespace std;
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix[n];
        int suffix[n];
        for(int i = 0;i<n;i++){
            if(i==0){
                prefix[i] = 1;
                continue;
            }
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for(int i = n-1;i>=0;i--){
            if(i==n-1){
                suffix[i] = 1;
                continue;
            }
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for(int i = 0;i<n;i++){
            nums[i] = prefix[i] * suffix[i];
        }
        return nums;


    }

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    v = productExceptSelf(v);
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
