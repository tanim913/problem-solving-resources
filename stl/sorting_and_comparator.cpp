#include <bits/stdc++.h>
using namespace std;

bool compare (int a, int b)
{
    return a > b; // return how you want to sort
}
int main ()
{
    int n;
    cin >>n;
    int ar[n];
    vector <int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> ar[i] ;
    }

    for(int i = 0; i<n; i++)
    {
        cin >> v[i] ;
    }
    sort (ar, ar+n); /// from first element to the element need to be sorted
    sort(v.begin(), v.end(),compare);

    for(int i = 0; i<n; i++)
    {
        cout << ar[i] << " " << v[i] << endl;
    }
    return 0;
}
