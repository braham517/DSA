#include<bits/stdc++.h>
using namespace std;
int rc(int arr[],int val[],int n)
{
    int t[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
            else{
                if(val[i-1]<=j)
                t[i][j]=max(arr[i-1]+t[i][j-val[i-1]],t[i-1][j]);
                else
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][n];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],val[n];
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    val[i]=i+1;
	    }
	    cout<<rc(arr,val,n)<<endl;
	}
	return 0;
}
