#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n;

    int ar[n];

    for(int i = 0; i<n; i++)
    {
        cin >> ar[i];
    }

    cin >> k;

    sort(ar, ar+n);

    cout << k <<"th min : " << ar[k-1] <<endl;
    cout << k <<"th max : " << ar[n-k] <<endl;

    return 0;
}

