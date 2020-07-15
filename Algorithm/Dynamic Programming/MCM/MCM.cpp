#include <bits/stdc++.h>
using namespace std;
int tt[1000][1000];
int solve(int arr[],int i,int j)
{
    if(i>=j)
    return 0;
    if(tt[i][j]!=-1)
    return tt[i][j];
    int mn=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
        mn=min(mn,temp);
    }
    tt[i][j]=mn;
    return tt[i][j];
}
int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    memset(tt,-1,sizeof(tt));
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<solve(arr,1,n-1)<<endl;
	}
	return 0;
}
