#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    int mx = arr[0];
    int curr = 0;

    for (int i = 0; i<n ; i++)
    {
        if(curr<0)
            curr = 0;
        curr += arr[i];
        mx = max(mx, curr);
    }
    return mx;

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

    cout << maxSubarraySum(ar,n)<<endl;

    return 0;
}

