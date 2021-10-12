                                    //Dijkstra's algorithm
/*
#include<iostream>
#include<vector>
#include<set>

using namespace std;
int inf=1e7;
int main()
{
    int v,e;
    cin>>v>>e;
    //vertex,wt
    vector<pair<int,int>>g[v+1];
    for(int i=0;i<e;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        g[x].push_back({y,z});
        g[y].push_back({x,z});
    }
    vector<int>dis(v+1,inf);
    //wt,vertex
    set<pair<int,int>>s;
    int src;
    cin>>src;
    dis[src]=0;
    s.insert({0,src});
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:g[x.second])
        {
            if(dis[it.first]>dis[x.second]+it.second)
            {
                s.erase({dis[it.first],it.first});
                dis[it.first]=dis[x.second]+it.second;
                s.insert({dis[it.first],it.first});
            }
        }
    }
    for(int i=1;i<=v;i++)
    {
        if(dis[i]==inf)
        {
            cout<<"-1 ";
        }
        else
        {
            cout<<dis[i]<<" ";
        }
    }
    return 0;
}
*/
