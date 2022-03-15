#include<iostream>
#include<vector>
using namespace std;

void print(int **arr, int m, int n) // passing double pointer in a function
{
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j<n; j++)
            cout<<arr[i][j]<<" ";
    }
}

int main()
{
    int **arr;
    int m = 3, n = 2;
    arr = new int *[m];
    for(int i = 0; i<m; i++)
    {
        arr[i] = new int [n];
        for(int j = 0; j<n; j++)
            arr[i][j] = i;
    }
    print(arr, m, n);
    return 0;
}