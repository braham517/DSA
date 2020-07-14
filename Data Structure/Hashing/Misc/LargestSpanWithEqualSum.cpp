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
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<n;i++){
        int temp;
	    cin>>temp;
	    arr[i]=arr[i]-temp;
	    }
	    int sum=0;
	    int maxl=0;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        if(sum==0)
	        {
	            int l=i+1;
	            maxl=max(maxl,l);
	        }
	        if(m.find(sum)!=m.end())
	        {
	            int l=i-m[sum];
	            maxl=max(maxl,l);
	        }
	        if(m.find(sum)==m.end())
	        m[sum]=i;
	    
	    }
	    cout<<maxl<<endl;
	}
	return 0;
}
