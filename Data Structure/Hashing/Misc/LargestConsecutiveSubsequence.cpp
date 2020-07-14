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
	    int ans=INT_MIN;
	    int res=0;
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    m[arr[i]]++;
	    for(int i=0;i<n;i++)
	    {
	        res=0;
	        if(m.find(arr[i]-1)==m.end())
	        {
	            int a=arr[i];
	            while(m.find(a++)!=m.end())
	            res++;
	        }
	        ans=max(ans,res);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
