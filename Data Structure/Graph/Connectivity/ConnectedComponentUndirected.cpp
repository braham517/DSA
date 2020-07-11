#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int vis[],int s,vector<int> &v)
{
    vis[s]=1;
    v.push_back(s);
    for(int i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==0)
            dfs(adj,vis,adj[s][i],v);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int vis[n]={0};
     vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0){
       
        dfs(adj,vis,i,v);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
          cout<<v[i]<<" ";
            v.clear();
        cout<<endl;
        }
    }
}
