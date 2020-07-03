#include <bits/stdc++.h>
using namespace std;
int issafe(int a,int b,int n,int m)
{
    if(a>=1&&b>=1&&a<=n&&b<=m)
    return 1;
    else
    return 0;
}
int ds(int si,int sj,int di,int dj,int n,int m){
    vector<vector<int>>dis(n+1,vector<int>(m+1,-1));
    vector<vector<int>>vis(n+1,vector<int>(m+1,0));
    int dr[] = { -2, -1, 1, 2, -2, -1, 1, 2 }; 
    int dc[] = { -1, -2, -2, -1, 1, 2, 2, 1 }; 
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=1;
    dis[si][sj]=0;
    while(!q.empty())
    {
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int r=a+dr[i];
            int c=b+dc[i];
            if(issafe(r,c,n,m)==1&&vis[r][c]==0)
            {
               // cout<<r<<" "<<c<<endl;
                q.push({r,c});
                dis[r][c]=dis[a][b]+1;
                vis[r][c]=1;
            }
        }
    }
    return dis[di][dj];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int si,sj,di,dj;
	    cin>>si>>sj>>di>>dj;
	    cout<<ds(si,sj,di,dj,n,m)<<endl;
	}
	return 0;
}
