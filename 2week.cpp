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
