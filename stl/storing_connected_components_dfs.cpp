#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <int> g[N];
bool vis [N];

vector <vector<int>> connected_components;
vector <int> current_cc;

void DFS (int vertex)
{
    ///take and action on vertex after entering the vertex


    if(vis[vertex]) return;
    //cout << vertex << "\n";
    current_cc.push_back(vertex);
    vis [vertex] = true;

    for(int child : g[vertex])
    {
        //if(vis[child]) continue;
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
    //cout << "Enter the number of Vertices and Edges : \n";
    cin >> vertice >> edge;

    for (int i = 0; i<edge; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }


    for (int i = 1; i<= vertice; i++) /// for each vertex checking if its visited
    {
        if(vis[i])
        {
            continue;
        }
        current_cc.clear();
        DFS(i);
        connected_components.push_back(current_cc);
    }


    cout <<"Number of connected components : "<<connected_components.size()<< endl;

    for(auto lst : connected_components) /// printing connected components
    {
        for(auto v: lst)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;



}
