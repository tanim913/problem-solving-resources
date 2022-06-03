#include <bits/stdc++.h>
using namespace std;

#define N 100
vector <int> g[N];

bool visited [N];
int level[N];

void bfs(int source)
{
    queue <int> q;
    q.push(source);
    visited[source] = true;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int child : g[current])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level [child]  = level[current] + 1;
            }
        }
    }


}

int main ()
{
    int vertice;
    cout << "Enter the number of vertex : \n";
    cin >> vertice;

    for (int i = 0; i<vertice-1; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

    bfs(1);
    cout << endl;
    for (int i = 1; i<=vertice; i++)
    {
        cout << i << ": "<< level[i] <<endl;
    }

    return 0;
}
