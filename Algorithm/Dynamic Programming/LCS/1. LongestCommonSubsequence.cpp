#include<bits/stdc++.h>
using namespace std;
int lcs(int n,int m,string a,string b){
int t[n+1][m+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=m;j++)
    {
        if(i==0||j==0)
        t[i][j]=0;
        else if(a[i-1]==b[j-1])
        {
            t[i][j]=1+t[i-1][j-1];
        }
        else{
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
}
return t[n][m];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    cout<<lcs(n,m,a,b)<<endl;;
	}
	return 0;
}
