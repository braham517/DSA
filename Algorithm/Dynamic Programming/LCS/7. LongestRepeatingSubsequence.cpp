using namespace std;
int lcs(int n,int m,string s,string b)
{
    int t[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
            else if(s[i-1]==b[j-1]&&i!=j)
            t[i][j]=t[i-1][j-1]+1;
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[n][n];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    cout<<lcs(n,n,s,s)<<endl;
	}
	return 0;
}
