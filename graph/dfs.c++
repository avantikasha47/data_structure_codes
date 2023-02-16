#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v); //singly linked ,not bidirectional
}

void DFS(vector<int> adj[], int v, vector<bool> &vis)
{
    vis[v] = true;
    cout << v << " ";
    //for(int i=0;i<adj[v].size() ; i++)
    for (auto i : adj[v])
    {
        //if(!vis[adj[v][i]])
        if (vis[i] == false)
            DFS(adj, i, vis);
    }
}
int main()
{
    vector<int> adj[5];
    vector<bool> visited(5, false);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    DFS(adj, 1, visited);
    printf("\nDFS BY AVANTIKA SHARMA\n");
}
