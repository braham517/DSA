#include <bits/stdc++.h>
using namespace std;

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
	    int res=arr[0];
	    int maxs=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        maxs=max(maxs+arr[i],arr[i]);
	        res=max(res,maxs);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
