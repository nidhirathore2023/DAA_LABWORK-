/* 1-Question 
//TC=O(logn)
#include<iostream>
using namespace std;
int countDuplicates2(int a[],int n,int k,bool first)
{
    int l=0;
    int h=n-1;
    int result=-1;
    while(l<=h)
    {
      int mid=(l+h)/2;
      if(a[mid]==k)
      {
        result=mid;
        if(first)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
      }
      else if(a[mid]>k)
      {
          h=mid-1;
      }
      else
      {
          l=mid+1;
      }
    }
    return result;
}
int countDuplicates(int a[],int n,int k)
{
    int first=countDuplicates2(a,n,k,true);
    int last=countDuplicates2(a,n,k,false);
    if(first==-1 || last==-1)
    {
        return -1;
    }
    return (last-first+1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int p=countDuplicates(a,n,k);
        if(p!=-1)
        {
            cout<<k<<"-"<<p<<"\n";
        }
        else
        {
            cout<<"Not Found "<<"\n";
        }
    }
    return 0;
}
*/
// 2-Question 
//T.c=O(n^3)
/*
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((i!=j )&&(j!=k)&&(k!=i))
                    {
                        if(a[i]+a[j]==a[k])
                        {
                            cout<<i<<","<<j<<","<<k<<"\n";
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
        if(flag==0)
        {
            cout<<"Squence not found";
        }
    }
    return 0;
}
*/

//Question 3
//TC=O(n)

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int>a;
        int k;
        cin>>k;
        int m;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            a.push_back(m);
        }
        sort(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==k)
            {
                count++;
            }
        }
        if(a[n-1]-a[n-2]==k)
        {
            count++;
        }
        cout<<count<<" \n";
    }
    return 0;
}
*/
