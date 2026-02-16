#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
int distinctPrimeFactors(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    long long product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= nums[i];
    }
    int prevI = 0;
    for (int i = 2; product > 1;)
    {

        if (product % i == 0)
        {
            if (prevI == 0 && count == 0)
            {
                prevI = i;
                count = 1;
            }
            if (prevI != i)
            {
                count++;
                prevI = i;
            }
            product /= i;
        }
        else
            i++;
    }
    return count;
}
int main()
{
    int arr[] = {5,7,32,6,8,34,76,834,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    int count = distinctPrimeFactors(v);
    cout<<count;
}