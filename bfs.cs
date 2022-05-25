using System;
using System.Collections.Generic;
using System.Linq;


class Graph
{

    int V;
    LinkedList<int>[] adj;

    public Graph (int ver)
    {
        adj = new LinkedList<int>[ver];

        for (int i = 0; i < adj.Length; i++)
        {
            adj[i] = new LinkedList<int>();
        }
        V = ver;
    }

    public void edgeAdd(int v, int w)
    {
        adj[v].AddLast(w);
    }

    public void BFS(int start)
    {
        bool[] visited = new bool[V];
        Array.Fill(visited, false);

        LinkedList<int> q = new LinkedList<int>();
        visited[start] = true;
        q.AddLast(start);

        while(q.Any())
        {
            start = q.First();
            Console.WriteLine(start +" ");
            q.RemoveFirst();

            LinkedList<int> list = new LinkedList<int>();
            list = adj[start];

            foreach (var val in list)
            {
                if (visited[val] == false)
                {
                    visited[val] = true;
                    q.AddLast(val);
                }
            }

        }

    }

    static void Main(string[] arg)
    {
        Graph g = new Graph(5);

        g.edgeAdd(0, 1);
        g.edgeAdd(0, 2);
        g.edgeAdd(1, 2);
        g.edgeAdd(2, 0);
        g.edgeAdd(2, 3);
        g.edgeAdd(3, 3);

        g.BFS(2);

    }


}
