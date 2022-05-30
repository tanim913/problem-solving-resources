#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <int> g[N];
bool vis [N];


void DFS (int vertex)
{
    ///take and action on vertex after entering the vertex


    if(vis[vertex]) return;
    cout << vertex << "\n";
    vis [vertex] = true;

    for(int child : g[vertex])
    {
        ///if(vis[child]) continue;
        ///take an action on child before entering the child node

        //cout << "\nParent : " << vertex << " Children : " << child << endl;
        DFS(child);

        ///take an action on child after exiting the child node
    }
    ///take and action on vertex before exiting the vertex
}

int main ()
{

    int vertice, edge;
    cout << "Enter the number of Vertices and Edges : \n";
    cin >> vertice >> edge;

    for (int i = 0; i<edge; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    int start;
    cout << "Enter Start node : ";
    cin >> start;

    DFS(start);




}
