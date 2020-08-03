#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int l[n],r[n];
	    int lm=INT_MIN;
	    int rm=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>lm)
	        lm=arr[i];
	        l[i]=lm;
	        //cout<<l[i]<<" ";
	    }
	    //cout<<endl;
	     for(int i=n-1;i>=0;i--)
	    {
	        if(arr[i]>rm)
	        rm=arr[i];
	        r[i]=rm;
	        //cout<<r[i]<<" ";
	    }
	   // cout<<endl;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        ans+=min(l[i],r[i])-arr[i];
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
