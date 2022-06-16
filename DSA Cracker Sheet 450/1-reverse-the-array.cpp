#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int ar [n];

    for(int i =0; i<n; i++)
    {
        cin >> ar[i];
    }
    int left = 0;
    int right = n-1;

    while (left < right)
    {
        swap(ar[left], ar[right]);
        left ++;
        right --;
    }
    for(int i =0; i<n; i++)
    {
        cout << ar[i] <<  " ";
    }
    return 0;
}
