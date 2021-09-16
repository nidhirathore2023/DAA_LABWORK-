//linear search 
//TC=O(n)

/*#include<iostream>
using namespace std;
int  linearsearch(int a[],int n,int k)
{
  int c=0;
  for(int i=0;i<n;i++)
  {
    c++;
    if(a[i]==k)
    {
      cout<<"PRESENT "<<c;
      return i;
    }
  }
  cout<<"NOT PRESENT "<<c;
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<linearsearch(a,n,k);
  }
  return 0;
}
*/


// Binary Search (iterative method)
//TC=O(log(n))

/*
#include<iostream>
using namespace std;
int Binarysearch(int a[],int l,int r,int k)
{
  int c=0;
  while(l<=r)
  {
    int m=(r+l)/2;
    c++;
    if(a[m]==k)
    {
      cout<<"PRESENT "<<c<<" ";
      return m;
    }
    else if(a[m]<k)
    {
      l=m-1;
    }
    else
    {
      r=m+1;
    }
    
  }
  cout<<"NOT PRESENT "<<c<<" ";
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<Binarysearch(a,0,n-1,k);
  }
  return 0;
}
*/


//Binary search (recursive method)
//TC=O(log(n))

/*#include<iostream>
using namespace std;
int Binarysearch(int a[],int l,int r,int k,int c)
{
  int mid=(r+l)/2;
  if(l<=r)
  {
    c++;
  if(a[mid]==k)
  {
    cout<<"PRESENT "<<c<<" ";
    return mid;
  }
  else if(a[mid]<k)
  {
    return Binarysearch(a,mid+1,r,k,c);
  }
  else
  {
    return Binarysearch(a,l,mid-1,k,c);
  }
  }
  cout<<"NOT PRESENT "<<c<<" ";
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<Binarysearch(a,0,n-1,k,0);
  }
  return 0;
}
*/

//Jump search 
//TC=O(n^1/2)

/*
#include<iostream>
#include<math.h>
using namespace std;
int Jumpsearch(int a[],int n,int k)
{
  int s=sqrt(n);
  int p=0;
  int count=0;
  while(a[min(n,s)-1]<k)
  {
    count++;
    p=s;
    s+=sqrt(n);
    if(p>=n)
    {
      count<<"NOT PRESENT";
      return count;
    }
   
  }
   while(a[p]<k)
    {
      count++;
      p++;
      if(p==min(n,s))
      {
        count<<"NOT PRESENT";
      return count;
      }
    }
      count++;

    if(a[p]==k)
    {
      count<<"PRESENT";
      return count;
    }
   count<<"NOT PRESENT";
      return count;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   cout<<Jumpsearch(a,n,k);
  
  
  }
  return 0;
}
*/
//Exponent Search
//T.C=(log(n))

/*
#include<iostream>
using namespace std;
int exponent(int a[],int n ,int k)
{
  int i=0,c=1;
  if(a[i]==k)
  {
    cout<<"PRESENT";
    return c;
  }
  i=1;
   while (i < n && a[i] <= k)
   {
        i = i*2;
         c++;
   }      
      for(int j=i/2;j<i;j++)
       {
        c++;
        if(a[j]==k)
          {
            cout<<"PRESENT ";
             return c;
           }
         }
    
  
  cout<<"NOT PRESENT";
  return c;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   cout<<exponent(a,n,k);
  
  }
  return 0;
}
*/