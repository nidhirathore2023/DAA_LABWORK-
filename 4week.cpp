                   //Question-1
/*
#include<iostream>
using namespace std;

int comparisons=0;
int inversions=0;
void merge(int a[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int left[n1], right[n2];
	int i,j;
	for(i=0;i<n1;i++)
	 left[i]=a[l+i];
	
	for(j=0;j<n2;j++)
	 right[j]=a[mid+j+1];
	
	i=j=0;
	int k=l;
	
	while(i<n1 && j<n2)
	{
		if(left[i] <= right[j])
		   a[k++]=left[i++];
		else 
		   a[k++]=right[j++];
		comparisons++;
		inversions++;
	}
	while(i<n1)
	{
		a[k++]=left[i++];
		inversions++;
	}
	while(j<n2)
	{
		a[k++]=right[j++];
		inversions++;
	}
	
}
void mergeSort(int a[],int l, int r)
{
	if(l>=r)   
	 return;
	int mid = l+ (r-l)/2;
	mergeSort(a,l,mid);
	mergeSort(a,mid+1,r);
	merge(a,l,mid,r);
}

int main()
{
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    
   mergeSort(a,0,n-1); 
   
   for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
   
   cout<<"\ncomparisons = "<<comparisons<<endl;
   cout<<"inversions = "<<inversions<<endl;
   }
   return 0;
}
*/

                                    // Question -2
 /*

 #include<iostream>
using namespace std;

int comparisons=0;
int inversions=0;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
            comparisons++;
            inversions++;
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    inversions++;
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
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
          cin>>a[i];

        quickSort(a,0, n-1);

        for(int i=0;i<n;i++)
           cout<<a[i]<<" ";
   
        cout<<"\ncomparisons = "<<comparisons<<endl;
        cout<<"inversions = "<<inversions<<endl;
   }
   return 0;
}
*/                                   
