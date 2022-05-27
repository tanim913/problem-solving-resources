#include <bits/stdc++.h>
using namespace std;

void print_map (map <int, string> &m)
{
    cout << "Size of the map is : " << m.size() <<endl;
    for (auto &pr :m)
    {
        cout << pr.first << " "<< pr.second <<endl; ///o(log(n))
    }

}

int main ()
{
    ///maps
    map <int, string> m;
    m[7] = "tanim";///o(log(n))
    m[5] = "tanim";
    m[1] = "tanim";
    m.insert({2,"tanim"});
    print_map(m);


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
    print_map(m);


}
