#include <iostream>
using namespace std;
int partion (int arr[], int l, int h) 
{ 
    int pivot = arr[h];   
    int i =l- 1;  
    for (int j = l; j<=h-1; j++) 
    { 
        if (arr[j]<=pivot) 
        { 
            i++;   
            swap(arr[i],arr[j]); 
        } 
    } 
    swap(arr[i+1],arr[h]); 
    return (i+1); 
} 
void qsort(int arr[],int l,int r)
{
	if(r>l)
	{
		int q=partion(arr,l,r);
		qsort(arr,l,q-1);
		qsort(arr,q+1,r);
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	qsort(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
