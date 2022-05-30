#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;

vector <pair<int,int>> g[N];
int g2[N][N];

int main ()
{

    int vertice, edge;
    cout << "Enter the number of Vertices and Edges : ";
    cin >> vertice >> edge;
    
    ///taking input of the graph
    for (int i = 0; i<edge; i++)
    {
        int v1,v2, weight;
        cin >> v1 >> v2 >> weight ;
        g[v1].push_back({v2,weight});
        g[v2].push_back({v2,weight});

        g2[v1][v2] = weight;
        g2[v2][v1] = weight;
    }

    ///knowing if connected

//    for (auto pr : g[i])
//    {
//        if(pr.first == j)
//        {
//            cout << pr.second << endl;
//        }
//    }
      return 0;


}
