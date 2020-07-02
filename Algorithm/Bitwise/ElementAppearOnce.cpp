#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    res^=arr[i];
    return res;
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
