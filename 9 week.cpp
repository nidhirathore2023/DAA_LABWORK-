// Question 1

/*
#include<bits/stdc++.h>
using namespace std;

#define INF 1e9

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cout<<"for values INF enter -1"<<endl;
	cin>>n;
	int a;

	int arr[n][n], dist[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a;
			if(a<0){
				arr[i][j] = INF;
			}
			else
				arr[i][j] = a;
			dist[i][j] = arr[i][j];
		}
	}

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(dist[i][k]+dist[k][j] < dist[i][j]){
					dist[i][j] = dist[i][k]+dist[k][j];
				}
			}
		}
	}

	cout<<"Shortest Distance Matrix: "<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dist[i][j]==INF){
				cout<<"INF ";
			}
			else
				cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
 
*/



// Question 2

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	
	vector<double> items(n);
	vector<double> val(n);
	vector<vector<double>> job;//to store pair of
	
	for(int i=0;i<n;i++){
		cin>>items[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>val[i];
		job.push_back({val[i]/items[i],items[i],i+1});
	}
	
	double k;
	cin>>k;
	
	sort(job.rbegin(), job.rend());//sort acc to val per wt
	
	vector<pair<double,double>> ls;
	
	float profit =0;
	
	for(int i=0;i<n;i++)
	{
		if(job[i][1] >= k)
		{
			profit += k*job[i][0];
			ls.push_back(make_pair(k, job[i][2]));
			break;
		}
		else
		{
			profit += job[i][1]*job[i][0];
		}
		ls.push_back(make_pair(job[i][1], job[i][2]));
		k = k - job[i][1];
	}
	
	cout<<"Maximum Value is: "<<profit<<endl;
	cout<<"Item - Weight"<<endl;
	
	for(auto it: ls)
		cout<<it.first<<" - "<<it.second<<endl;
	
	return 0;
}
*/

//Question 3

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	priority_queue<int, vector<int>, greater<int>> minheap;

	for(int i=0;i<n;i++){
		minheap.push(a[i]);
	}

	int ans = 0;

	while(minheap.size()>1){
		int e1 = minheap.top();
		minheap.pop();
		int e2 = minheap.top();
		minheap.pop();
		ans += e1+e2;
		minheap.push(e1 + e2);
	}
	cout<<ans;
	return 0;
}
*/
