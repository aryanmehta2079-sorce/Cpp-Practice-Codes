// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int max = 0;
//     int index = 0;
//     for(int i = 0;i<=n-k;i++){
//         int ans = 0;
//         for(int j = i;j<i+k;j++){
//             ans += arr[j];
            
//         }
//         if(max<ans){
//             max = ans;
//             index = i;
//         }
//     }
//     cout<<max<<endl;
//     cout<<index;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4; 
    int max = 0;
    int index = 0;
    int ans = 0;
    for(int i = 0;i<=n-k;i++){
        if(i>0){
        ans = ans-arr[i-1]+arr[i+k-1];
        }
        else{
        for(int j = i;j<i+k;j++){
            ans += arr[j];
        }
        }
        if(max<ans){
            max = ans;
            index = i;
        }
    }
    cout<<max<<endl;
    cout<<index;
}