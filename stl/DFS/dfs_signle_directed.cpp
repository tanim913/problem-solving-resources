#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector <char> G[N];
bool visited[N];

void DFS(char vertex)
{
    if(visited[vertex]) return;
    cout << vertex << endl;
    visited[vertex] = true;

    for (char child : G[vertex])
    {
        cout << "\nParent : " << vertex << " Children : " << child << endl;
        DFS(child);
    }
}

int main()
{
    int ver, edg;
    cin >> ver >> edg;

    for(int i = 0; i< edg; i++)
    {
        char v1,v2;
        cin>> v1 >> v2;
        G[v1].push_back(v2);
    }

    char start;
    cout << "Enter Start node : ";
    cin >> start;

    DFS(start);

    return 0;
}




/**
5 8
a b
a d
a c
a e
b d
c d
c e
d e

dfs

a
b
d
e
c

**/
