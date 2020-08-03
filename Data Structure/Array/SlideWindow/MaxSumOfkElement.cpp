#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int ms=0,sum=0;
	    for(int i=0;i<k;i++)
	    sum+=arr[i];
	    ms=s;
	    for(int i=k;i<n;i++)
	    {
	        sum+=arr[i]-arr[i-k];
	        ms=max(ms,s);
	    }
	    cout<<ms<<endl;
	}
	return 0;
}
