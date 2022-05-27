/*** Given N strings. Print unique strings in lexiographical order with their frequency***/

#include <bits/stdc++.h>
using namespace std;


void print_map (map <string, int> &m)
{
    cout << "Size of the map is : " << m.size() <<endl;
    for (auto &pr :m)
    {
        cout << pr.first << " : "<< pr.second <<endl; ///o(log(n))
    }

}

int main ()
{
    map <string, int> m;
    int n;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    print_map(m);


}
