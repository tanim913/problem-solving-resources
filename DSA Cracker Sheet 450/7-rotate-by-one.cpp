#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int v = arr[n-1];
    for (int i= n-2; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = v;

}

int main()
{
    int n;
    cin >>n;
    int ar [n];

    for(int i =0; i<n; i++)
    {
        cin >> ar[i];
    }

    rotate(ar,n);

    for(int i =0; i<n; i++)
    {
        cout << ar[i] <<  " ";
    }
    return 0;
}

