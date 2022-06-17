#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;
    int n,m;
    cin >> n>>m;
    int a [n], b[m];

    for(int i =0; i<n; i++)
        cin >> a[i];
    for(int j =0; j<m; j++)
        cin >> b[j];

    cout << "Union : ";

    for(int i = 0; i<n; i++)
        s.insert(a[i]);
    for(int i = 0; i<m; i++)
        s.insert(b[i]);
    for(int n: s)
        cout  << n << " ";

    s.clear();

    cout << "\nIntersection : ";

    for (int i: a)
    {
        for(j : b)
        {
            if(i == j)
                s.insert (i);
        }
    }
    if(s.size() == 0)
        cout << "NULL SET";
    for(int n: s)
        cout  << n << " ";

    return 0;
}
