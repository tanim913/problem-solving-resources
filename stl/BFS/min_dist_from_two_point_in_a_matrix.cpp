#include <bits/stdc++.h>
#define s_t 4
using namespace std;

const int inf = 1e9+10;

int graph[s_t][s_t];
bool vis[s_t][s_t];
int lvl[s_t][s_t];



bool valid (int x, int y)
{
    return (x>=0 && y>=0 && x<s_t && y<s_t);
}

vector <pair <int,int>> directions =
{
    {0,1}, {0,-1}, {1,0}, {-1,0}
};

int bfs(int src_x, int src_y, int dest_x,int dest_y)
{

    queue <pair<int,int>> q;
    q.push({src_x, src_y});
    vis[src_x][src_y] = true;
    lvl[src_x][src_y] = 0;

    while(!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first, y = p.second;
        q.pop();

        for (auto dir : directions)
        {
            int dir_x = dir.first + x;
            int dir_y = dir.second + y;

            if(!valid(dir_x, dir_y))continue;
            if(graph[dir_x][dir_y] !=1)continue;

            if(!vis[dir_x][dir_y])
            {
                q.push({dir_x, dir_y});
                lvl [dir_x][dir_y] = lvl[x][y] + 1;
                vis[dir_x][dir_y] = true;
            }
        }
        if(lvl[dest_x][dest_y] != inf) break;

    }
    return lvl[dest_x][dest_y];

}
void reset()
{
    for (int i = 0; i < s_t; i++)
    {
        for(int j = 0; j<s_t; j++)
        {

            vis[i][j] = false;
            lvl[i][j] = inf;

        }
    }

}
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        reset();
        for(int i = 0; i<s_t; i++)
        {
            for (int j = 0; j<s_t; j++)
            {
                cin >> graph[i][j];
            }
        }
        int s_x,s_y, d_x, d_y;
        cin >> s_x >> s_y >> d_x >> d_y;
        cout << bfs(s_x,s_y, d_x, d_y) << endl;
    }
    return 0;
}
