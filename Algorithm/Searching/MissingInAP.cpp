#include <bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int diff){
    int l=0;
    int h=n-1;
    int mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(arr[mid+1]-arr[mid]!=diff)
        return arr[mid]+diff;
        else if(arr[mid]-arr[mid-1]!=diff)
        return arr[mid-1]+diff;
        else if(arr[mid]==arr[0]+mid*diff)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int diff = (arr[n-1]-arr[0])/n; 
	    int a=find(arr,n,diff);
	    cout<<a<<endl;
	}
	return 0;
}
