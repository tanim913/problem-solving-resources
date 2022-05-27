/*** Given N strings. Print unique strings in with their frequency***/

#include <bits/stdc++.h>
using namespace std;


void print_unordered_map (unordered_map <string, int> &m)
{
    cout << "Size of the map is : " << m.size() <<endl;
    for (auto &pr :m)
    {
        cout << pr.first << " : "<< pr.second <<endl; ///o(1)
    }

}

int main ()
{

    ///1. inbuilt implementation
    ///2. time complexity
    ///3. valid keys
    unordered_map <string, int> m;
    int n;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    print_unordered_map(m);


}
