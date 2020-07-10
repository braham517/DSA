#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int sum)
{
    int t[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    t[0][i]=0;
    for(int i=0;i<=n;i++)
    t[i][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            t[i][j]=(t[i-1][j]+t[i-1][j-arr[i-1]])%1000000007;
            else
            t[i][j]=t[i-1][j]%1000000007;
        }
    }
  return t[n][sum]%1000000007;    
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
	    int sum;
	    cin>>sum;
	    cout<<count(arr,n,sum)<<endl;
	}
	return 0;
}
