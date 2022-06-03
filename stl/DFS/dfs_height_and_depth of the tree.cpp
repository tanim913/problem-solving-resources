#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <int> g[N];
int depth[N];
int height[N];

void DFS (int vertex,int parent=0)
{





    for(int child : g[vertex])
    {
        if (child == parent) continue;

        depth[child] = depth[vertex] + 1; /// depth comes from parents

        DFS(child, vertex);

        height[vertex] = max (height[vertex], height[child] +1); ///height comes from child


    }

}

int main ()
{

    int vertice;
    cout << "Enter the number of Vertices and Edges : \n";
    cin >> vertice;

    for (int i = 0; i<vertice-1; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }


    DFS(1);

    for (int i = 1; i<=vertice; i++)
    {
        cout << depth[i] <<" "<< height [i] << endl;
    }


    return 0;


}
