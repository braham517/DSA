#include<bits/stdc++.h>
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
	    int w;
	    cin>>w;
	    int t[n+1][w+1];
      for(int i=0;i<=n;i++)
      {
        for(int j=0;j<=w;j++)
        {
            if(i==0)
            t[i][j]=0;
            else if(j==0)
            t[i][j]=1;
            else if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j]+t[i][j-arr[i-1]];
            }
            else
            t[i][j]=t[i-1][j];
        }        
    }
    cout<<t[n][w]<<endl;
	}
	return 0;
}
