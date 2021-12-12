// Question 1
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int nodes, edges;
	cin>>nodes;
	cin>>edges;

	vector<pair<int,int>> graph[nodes];
	int source, destination, weight;

	for(int i=0;i<edges;i++)
	{
		cin>>source>>destination>>weight;
		graph[source].push_back(make_pair(destination,weight));
		graph[destination].push_back(make_pair(source, weight));
	}

	int key[nodes];//to select the min weight
	int parent[nodes];// to store the parent node
	bool mst[nodes]; // to construct the path

	for(int i=0;i< nodes;i++)// initialization
	{
		key[i]= INT_MAX;
		mst[i] = false;
		parent[i] = -1;
	}

	// priority queue APPROACH
	priority_queue<pair<int, int>, vector<pair<int,int>>,
	greater<pair<int,int>>> pq;

	key[0] = 0;//select a node to start from
	parent[0] = 0;

	pq.push({0, 0}); //{weight, index of starting node}

	for(int i=0;i< nodes-1;i++)
	{
		int u = pq.top().second;//get the index of top node
		pq.pop();//remove the node from queue
		mst[u] = true;//set mst as true for the node u
	
		for(auto it: graph[i])
		{
			int dest = it.first;
			int wt = it.second;
			if(mst[dest]== false && wt<key[dest])//check if the parent
				array needs to be changed
			{
				parent[dest] = u;
				pq.push({key[dest], dest});
				key[dest] = wt;
			}
		}
	}

	int mstwt = 0;
	// to print the list with minimun weight
	
	for(int i=0;i<nodes;i++)
		mstwt += key[i];
	
	cout<<"Min Spanning Weight is: "<<mstwt;
	
	return 0;
}
*/


 // Question 2


/*
#include<bits/stdc++.h>
using namespace std;

vector<int> parent(100);
vector<int> sz(100);

void make_set(int v)
{
	parent[v]=v;
	sz[v] = 1;
}

int find_set(int v)
{
	if(v==parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
	a = find_set(a);
	b = find_set(b);
	if(a != b){//dont belong to same set
		if(sz[a] < sz[b])
			swap(a,b);
		parent[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,e;
	cin>>n>>e;

	for(int i=0;i<n;i++)
		make_set(i);

	vector<vector<int>> graph;

	for(int i=0;i<e;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		graph.push_back({w,u,v});
		graph.push_back({w,v,u});
	}
	
	sort(graph.begin(), graph.end());//sort according to weight
	
	int total_weight = 0;
	
	for(auto i: graph){
		int w = i[0];
		int u = i[1];
		int v = i[2];
		int x = find_set(u);
		int y = find_set(v);
		if(x == y){
			continue;
		}
		else{
			total_weight += w;
		union_set(u,v);//add to set
		}
	}
	
	cout<<"Minimum Spanning Weight is: "<<total_weight;
	return 0;
}

*/


// Question 3

/*
#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int>& a, const pair<int, int>& b){
	return b.first > a.first;
}

vector<int> parent(100);
vector<int> sz(100);

void make_set(int v)
{
	parent[v]=v;
	sz[v] = 1;
}

int find_set(int v)
{
	if(v==parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
	a = find_set(a);
	b = find_set(b);
	if(a != b){//dont belong to same set
		if(sz[a] < sz[b])
			swap(a,b);
		parent[b] = a;
		sz[a] += sz[b];
	}
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n,e;
	cin>>n>>e;
	for(int i=0;i<n;i++)
		make_set(i);
	
	vector<vector<int>> graph;
	
	for(int i=0;i<e;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		graph.push_back({w,u,v});
		graph.push_back({w,v,u});
	}
	
	sort(graph.rbegin(), graph.rend());//sort according to weight
	
	int total_weight = 0;
	
	for(auto i: graph){
		int w = i[0];
		int u = i[1];
		int v = i[2];
		int x = find_set(u);
		int y = find_set(v);
		if(x == y){
			continue;
		}
		else{
		//cout<<u<<" "<<v<<endl;
				total_weight += w;
		union_set(u,v);//add to set
		}
	}
	
	cout<<"Maximum Spanning Weight is: "<<total_weight;
	return 0;
}



*/
