#include <bits/stdc++.h>
using namespace std;

vector<int> next_greater_element (vector <int> v)
{
    vector <int> nge_index (v.size());
    stack <int> stc;

    for (int i = 0; i< v.size(); i++)
    {
        while(!stc.empty() && v[i] > v[stc.top()])
        {
            nge_index[stc.top()] = i;
            stc.pop();
        }
        stc.push(i);
    }
    while(!stc.empty())
    {
        nge_index[stc.top()] = -1; ///putting -1 for the indexes that doesn't contain bigger value
        stc.pop();
    }
    return nge_index;
}

int main ()
{
    int n;
    cin >> n;

    vector <int> v (n);

    for (int i =0; i<n; i++)
    {
        cin >> v[i];
    }
    vector <int> nge = next_greater_element(v);

    for (int i =0; i<n; i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
    return 0;

}
