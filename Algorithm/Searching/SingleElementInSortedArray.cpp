#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n)
{
    int st=0;
    int end=n-1;
    int mid;
    while(st<=end)
    {
        mid=(st+end)/2;
        if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1])
        return arr[mid];
        if((mid%2==0&&arr[mid]==arr[mid+1])||(mid%2==1&&arr[mid]==arr[mid-1]))
        st=mid+1;
        else
        end=mid-1;
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
	    cout<<bs(arr,n)<<endl;
	}
	return 0;
}
