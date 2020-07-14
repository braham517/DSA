#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int sum=0;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        if(m.find(sum)!=m.end()||sum==0)
	        {
	            f=1;
	            cout<<"Yes"<<endl;
	            break;
	        }
	        m[sum]++;
	    
	    }
	    if(f==0)
	    cout<<"No"<<endl;
	    m.clear();
	}
	return 0;
}
