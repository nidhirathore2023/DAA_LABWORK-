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

	int n;
	cin>>n;

	vector<int> st(n), dline(n);
	vector<vector<int>> activity;

	for(int i=0;i<n;i++){
		cin>>st[i];
	}

	for(int i=0;i<n;i++){
		cin>>dline[i];
		activity.push_back({dline[i],st[i], i+1});
	}

	sort(activity.begin(), activity.end());

	vector<int> selected;
	int count=0;
	int currentEnd = -1;

	for(int i=0;i<n;i++){
		if(activity[i][1]>currentEnd){
			count++;
			currentEnd = activity[i][0];
			selected.push_back(activity[i][2]);
		}
	}

	cout<<"No. of non-conflictin activities: "<<count<<endl;
	cout<<"List of selected activites: ";

	for(auto i: selected){
		cout<<i<<" ";
	}
	return 0;
}
*/



// Question 2


/*

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
	return a.first > b.first;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	
	int p[n];
	int d[n];
	
	for(int i=0;i<n;i++)
		cin>>p[i];
	
	for(int i=0;i<n;i++)
		cin>>d[i];
	
	vector<pair<int,int> > jobs;
	
	int profit,deadline;
	
	for(int i=0;i<n;i++){
		jobs.push_back(make_pair(p[i],d[i]));
	}
	
	sort(jobs.begin(),jobs.end(),compare);
	int maxEndTime = 0;
	
	for(int i=0;i<n;i++){
		if(jobs[i].second > maxEndTime)
			maxEndTime = jobs[i].second;
	}
	
	vector<int> ans;
	int fill[maxEndTime];
	int count = 0, maxProfit = 0;
	
	for(int i=0;i<n;i++) fill[i] = -1;
		for(int i=0;i<n;i++){
			int j = jobs[i].second - 1;
			while(j>=0 && fill[i]!=-1) j--;
			if(j>=0 && fill[j]==-1){
				fill[j] = i;
				ans.push_back(i);
				count++;
				maxProfit = maxProfit + jobs[i].first;
			}
		}
	
	cout<<"Maximum no of tasks : "<<count<<endl;
	cout<<"Selected task numbers : ";
	
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	
	return 0;
}

*/


// Question 3

/*

#include <bits/stdc++.h>
using namespace std;

string majorityElement(int *arr, int n)
{
	int count = 1, max_ele = -1, temp = arr[0], ele, f=0;
	for(int i=1;i<n;i++)
	{
		if(temp==arr[i])
		{
			count++;
		}
		else
		{
			count = 1;
			temp = arr[i];
		}
		if(max_ele<count)
		{
			max_ele = count;
			ele = arr[i];
			if(max_ele>(n/2))
			{
				f = 1;
				break;
			}
		}
	}
	return (f==1 ? "yes" : "no");
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr, arr+n);

	cout<<majorityElement(arr, n)<<endl;

	if(n%2 == 0){
		cout<<(arr[n/2 -1]+arr[n/2])/2;
	}
	else{
		cout<<arr[n/2];
	}

	return 0;
}

*/
