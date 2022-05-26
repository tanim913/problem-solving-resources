#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    cout << "Vector Values :";
    for (int i =0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main ()
{

    ///pair
    pair <int, string> p;
    p = make_pair (2, "abc");
    cout << p.first <<endl;
    cout << p.second <<endl;

    ///vector
    vector <int> v,v2;
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    cout << v[1] <<endl;
    cout << v.size() <<endl;
    printVector(v);
    v.pop_back(); ///doesn't return anything
    ///vector of pair
    v2 = v; ///copying directly

    sort(v.begin(), v.end()); ///sorting vector
    v.erase( unique( v.begin(), v.end() ), v.end() );/// keeping only unique value in the vector


    vector <pair<int,int>> vp;
    for (int i =0; i<5; i++)
    {
        vp.push_back(make_pair(i+1,i+2));
        cout << vp[i].first << ", " <<vp[i].second <<endl;
    }
    cout << vp.size() <<endl;

    ///filling a vector initially with a certain value
    vector <int> vfill(5,100);
    cout<< "filled vector : \n";
    printVector(vfill);

    return 0;


}
