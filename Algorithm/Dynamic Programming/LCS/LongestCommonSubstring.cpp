#include<bits/stdc++.h>
using namespace std;
int lcs(int n,int m,string a,string b){
int t[n+1][m+1];
int mx=0;
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=m;j++)
    {
        if(i==0||j==0)
        t[i][j]=0;
        else if(a[i-1]==b[j-1])
        {
            t[i][j]=1+t[i-1][j-1];
                mx=max(mx,t[i][j]);
        }
        else{
            t[i][j]=0;
        }
    }
}

return mx;
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
