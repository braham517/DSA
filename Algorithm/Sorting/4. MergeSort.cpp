#include <iostream>
using namespace std;
void mergesort(int arr[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int left[n1];
	int right[n2];
	for(int i=0;i<n1;i++)
		left[i]=arr[l+i];
	for(int i=0;i<n1;i++)
		right[i]=arr[m+1+i];
	int i=0,j=0,k=l;
	while(i<n1&&j<n2)
	{
		if(left[i]<right[j])
		arr[k++]=left[i++];
		else
		arr[k++]=right[j++];
	}
	while(i<n1)
		arr[k++]=left[i++];
	while(j<n2)
		arr[k++]=right[j++];
	
}
void merge(int arr[],int l,int r)
{
	if(r>l)
	{
		int m=(l+r)/2;
		merge(arr,l,m);
		merge(arr,m+1,r);
		mergesort(arr,l,m,r);
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	merge(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
