#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i<n; i++)
    {
        if(a[i] == 0)
            c0++;
        if(a[i] == 1)
            c1++;
        if(a[i] == 2)
            c2++;
    }

    for(int i = 0; i<c0; i++)
        a[i] = 0;
    for(int i = c0; i<c0+c1; i++)
        a[i] = 1;
    for(int i = c0+c1; i<c0+c1+c2; i++)
        a[i] = 2;
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
    sort012(ar,n);
    for(int i =0; i<n; i++)
    {
        cout << ar[i] <<  " ";
    }
    return 0;
}
