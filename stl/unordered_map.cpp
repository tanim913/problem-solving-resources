#include <bits/stdc++.h>
using namespace std;

void print_unordered_map (unordered_map <int, string> &m)
{
    cout << "Size of the map is : " << m.size() <<endl;
    for (auto &pr :m)
    {
        cout << pr.first << " : "<< pr.second <<endl; ///o(1)
    }

}

int main ()
{
    ///unordered maps
    ///1. inbuilt implementation --> unordered
    ///2. time complexity -- o(1)
    ///3. valid keys --> no complex type as keys
    unordered_map <int, string> m;
    m[7] = "tanim";///o(1)
    m[5] = "tanim";
    m[1] = "tanim";
    m.insert({2,"tanim"});
    print_unordered_map(m);


//    map <int, string> :: iterator it;
//    for (it = m.begin(); it!= m.end(); it++)
//    {
//        cout << it->first << " "<< it->second <<endl;
//    }

    ///finding value
    auto it = m.find(7);
    if (it == m.end())
    {
        cout <<" No values " << endl;
    }
    else
    {
        cout << it->first << " "<< it->second <<endl;
    }

    ///erasing value

    auto it2 = m.find(7);
    if (it2 != m.end())
    {
        m.erase (it2);
    }
    m.clear();
    print_unordered_map(m);


}
