#include <bits/stdc++.h>
using namespace std;

void rot(int arr[], int n)
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

//    vector <int> v;
//    rotate(v.begin(),v.begin()+v.size()-k,v.end()); right-shift
//    rotate(v.begin(),v.begin()+k,v.end()); left-shift

    rot(ar,n);

    for(int i =0; i<n; i++)
    {
        cout << ar[i] <<  " ";
    }
    return 0;
}

