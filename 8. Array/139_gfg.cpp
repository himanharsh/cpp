#include<iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int ans = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int max = findMax(arr,n);
    cout<<max;
    return 0;
    return 0;
}