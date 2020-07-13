bool dfs(vector<int> g[],bool vis[],int v,int p)
{
    vis[v]=true;
    for(int i=0;i<g[v].size();i++)
    {
        if(vis[g[v][i]]==false)
            return dfs(g,vis,g[v][i],v);
        else if(p!=g[v][i])
        return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
    bool vis[V]={false};
   for(int i=0;i<V;i++)
   {
       if(vis[i]==false)
       {
           if(dfs(g,vis,i,-1)==true)
           return true;
       }
   }
   return false;
   
}
