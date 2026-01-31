#include<iostream>
#include<string>
using namespace std;
    int bestClosingTime(string customers) {
        int n = customers.size();
        int prefix[n];
        int suffix[n];
        for(int i = n-1;i>=0;i--){
            if(customers[i]=='Y'){
                if(i==n-1){
                   suffix[i] = 1;
                   continue;
                }
                suffix[i] = suffix[i+1] + 1;
            }
            else{
                if(i==n-1){
                    suffix[i] = 0;
                    continue;
                }
                suffix[i] = suffix[i+1];
            }
        }
        prefix[0] = 0;
        for(int i = 1;i<n;i++){
            if(customers[i-1]=='N'){
                prefix[i] = prefix[i-1] + 1;
            }
            else{
                prefix[i] = prefix[i-1];
            }
        }
        int minPenalty = suffix[0] + prefix[0];
        int minIndex = 0;
        int penalty[n+1];
        for(int i = 0;i<n+1;i++){
            if(i==n){
                penalty[i] = prefix[n-1];
                if(penalty[i]<minPenalty){
                minPenalty = penalty[i];
                minIndex = i;
            }
            break;
            }
            penalty[i] = suffix[i] + prefix[i];
            if(penalty[i]<minPenalty){
                minPenalty = penalty[i];
                minIndex = i;
            }
        }
        return minIndex;
    }

int main(){
    string customer = "YYYY";
    cout<<bestClosingTime(customer);

}
