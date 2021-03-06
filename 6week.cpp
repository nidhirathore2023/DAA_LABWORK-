           //Question -1 
/*
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfs_traversal(vector<int> adj[], int n)
{
    queue<int> q;
    vector<bool> vis(n, 0);
    vector<int> bfs;
    q.push(0);
    vis[0]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=true;
            }
        }
    }
    return bfs;
}
int main()
{
    int n, e;
    cin>>n;
    cin>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    vector<int> bfs;
    bfs=bfs_traversal(adj, n);
    for(auto it: bfs)
     cout<<it<<" ";
    return 1;
}
*/
//Qusetion 2
      /*
      #include<iostream>
#include<vector>

using namespace std;

bool isBipartiteDFS(vector<int> adj[], int node, vector<int> &colour)
{
    for(auto it: adj[node])
    {
        if(colour[it]==-1)
        {
            colour[it]=1-colour[node];
            if(isBipartiteDFS(adj, it, colour)==false)
             return false;
            else if(colour[it]==colour[node])
             return false;
        }
    }
    return true;
}

bool isBipartite(vector<int> adj[], int n)
{
    vector<int> colour(n,-1);
    colour[0]=1;
    if(isBipartiteDFS(adj, 0, colour))
     return true;
    else 
    return false;
}
int main()
{
    int n, e;
    cin>>n;
    cin>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    if(isBipartite(adj, n))
     cout<<"bipartite";
    else cout<<"not bipartite";

    return 1;
}*/
