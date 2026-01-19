#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int dutchAlgo(vector<int> &v, int k)
{
    int low = 0;
    int high = v.size()-1;

    while (low <= high){
        int start = low, i = low,end = high;
        int pivot = v[low + rand() % (high - low + 1)];

        while(i<=end){
        if (v[i] > pivot){
            swap(v[i++], v[start++]);
        }
        else if (v[i] < pivot){
            swap(v[i], v[end--]);
        }
        else i++; 
        }

        if (k<=start-low){
            high = start-1;
        }
        else if (k<=(end-low+1)){
            return pivot;
        }
        else{
            k = k-(end-low+1);
            low = end+1;
        }
    
    }
}

int main()
{
    int arr[] = {5, 8, 2, 7, 6, 3, 4};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << dutchAlgo(v, k);
}
