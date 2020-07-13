#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int w;
	    cin>>w;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int t[n+1][w+1];
	    for(int i=0;i<=w;i++)
	       t[0][i]=INT_MAX-1;
	     for(int i=0;i<=n;i++)
	       t[i][0]=0;
	     for(int i=0;i<=w;i++)
	     {
	        if((i%arr[0])==0)
	        t[1][i]=i/arr[0];
	        else
	        t[1][i]=INT_MAX-1;
	      } 
      for(int i=2;i<=n;i++)
      {
        for(int j=1;j<=w;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=min(t[i-1][j],1+t[i][j-arr[i-1]]);
            }
            else
            t[i][j]=t[i-1][j];
        }        
    }
    if(t[n][w]!=INT_MAX-1)
    cout<<t[n][w]<<endl;
    else
    cout<<-1<<endl;
	}
	return 0;
}
