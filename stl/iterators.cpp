#include <bits/stdc++.h>
using namespace std;


int main ()
{
    ///iterators
    vector <int> v = {1,2,3,4,5};
    //vector <int> ::iterator it = v.begin();

    for (auto it = v.begin(); it!=v.end(); it++)
    {
        cout << (*it) <<endl;
    }

    vector <pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    //vector <pair<int,int>> ::iterator it2 = vp.begin();

    for (auto it2 = vp.begin(); it2!=vp.end(); it2++)
    {
        cout << (*it2).first<<" "<<(*it2).second <<endl;
    }
    cout << endl;
    for (auto it2 = vp.begin(); it2!=vp.end(); it2++)
    {
        cout << it2->first <<" "<< it2->second <<endl;
    }

    cout << "using short for loops : ";
    for (int val :v) /// it uses copy
    {
        cout << val << " ";
    }
    cout <<endl;

    for (auto &val :v) ///it doesn't use copies
    {
        cout << ++val << " ";
    }
    cout <<endl;

    cout << "using short for loops : \n";
    for (auto &val :vp)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout <<endl;


}
