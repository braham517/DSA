#include <bits/stdc++.h>
using namespace std;
int issafe(int a,int b,int n)
{
    if(a>=0&&b>=0&&a<n&&b<n)
    return 1;
    else
    return 0;
}
int pe(vector<vector<int>> v,int n,pair<int,int> s)
{
    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    int vis[n][n]={0};
    queue<pair<int,int>>q;
    q.push({s.first,s.second});
    vis[s.first][s.second]=1;
    while(!q.empty())
    {
       int r=q.front().first;
       int c=q.front().second;
       q.pop();
       for(int i=0;i<4;i++)
       {
           
           int rr=r+dr[i];
           int cc=c+dc[i];
           if(issafe(rr,cc,n)==1&&v[rr][cc]==2)
           return 1;
           if(issafe(rr,cc,n)==1&&v[rr][cc]==3&&vis[rr][cc]==0)
           {
               q.push(make_pair(rr,cc));
               vis[rr][cc]=1;
           }
           
       }
    }
    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>>v(n,vector<int>(n,0));
	    pair<int,int> s;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            int temp;
	            cin>>temp;
	            v[i][j]=temp;
	            if(v[i][j]==1)
	            s=make_pair(i,j);
	        }
	    }
	    cout<<pe( v, n, s)<<endl;
	    
	}
	return 0;
}
