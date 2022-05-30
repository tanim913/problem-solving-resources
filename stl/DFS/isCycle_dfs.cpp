#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <int> g[N];
bool vis [N];


bool DFS_cycle (int vertex, int parent)
{

    vis [vertex] = true;
    bool loop_exists = false;

    for(int child : g[vertex])
    {
        if(vis[child] && child == parent) ///if it comes from parent
            continue;
        if(vis[child])
            return true;
        loop_exists |= DFS_cycle(child,vertex);
    }
    return loop_exists;
}

int main ()
{

    int vertice, edge;

    cin >> vertice >> edge;

    for (int i = 0; i<edge; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

    bool loop_exists = false;
    for (int i = 1; i<= vertice; i++)
    {
        if(vis[i])
        {
            continue;
        }
        if(DFS_cycle(i,0))
        {
            loop_exists = true;
            break;
        }
    }

    loop_exists ? cout << "There is Loop" : cout << "No Loop";



    return 0;



}



