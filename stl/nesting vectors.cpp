#include <bits/stdc++.h>
using namespace std;

void printVectorPair(vector <pair<int, int>> &vp)
{
    for (int i = 0; i< vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second <<endl;
    }
}
void printVector(vector<int> &v)
{
    cout << "Vector Values :" <<endl;
    for (int i =0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main ()
{
    ///vector of pair

    vector <pair<int,int>> vp;
    vp.push_back(make_pair(5,6));
    vp.push_back(make_pair(7,6));
    vp.push_back(make_pair(6,6));
    vp.push_back(make_pair(3,6));
    vp.push_back(make_pair(1,6));
    vp.push_back({100,400});

    printVectorPair(vp);

    ///vectors of vectors
    vector <vector<int>> v;

    int N;
    cin >> N;


    for (int i = 0; i<N; i++)
    {
        int n;
        cin>>n;
        //vector <int> temp;
        v.push_back(vector<int> ());
        for (int j = 0; j<n; j++)
        {
            int x;
            cin>> x;
            v[i].push_back(x);
        }
        //v.push_back(temp);
    }

    for (int i =0; i< v.size(); i++)
    {
        printVector(v[i]);
    }




}
