#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int sum=0;
	    int maxl=0;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        if(sum==k)
	        {
	            int l=i+1;
	            maxl=max(maxl,l);
	        }
	        if(m.find(sum-k)!=m.end())
	        {
	            int l=i-m[sum-k];
	            maxl=max(maxl,l);
	        }
	        if(m.find(sum)==m.end())
	        m[sum]=i;
	    
	    }
	    cout<<maxl<<endl;
	}
	return 0;
}
