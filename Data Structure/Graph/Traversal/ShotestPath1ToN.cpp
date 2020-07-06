#include<bits/stdc++.h>
using namespace std;
int bfs(int s,int d,vector<int> adj[],int n)
{
    queue<int> q;
    bool vis[n+1]={false};
    int u;
    int distance[n+1];
    q.push(s);
    distance[s]=0;
    vis[s]=true;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        for(int j=0;j<adj[temp].size();j++)
        {
            u=adj[temp][j];
            while(!vis[u])
            {
                vis[u]=true;
                distance[u]=distance[temp]+1;
                q.push(u);
            }
        }
    }
    return distance[d];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> adj[n+1];
        for(int i=1;i<=n;i++)
        {
            if(i+1<=n)
            adj[i].push_back(i+1);
            if(3*i<=n)
            adj[i].push_back(3*i);
        }
          cout<<bfs(1,n,adj,n)<<endl;
    }
  
  
}
