void topso(int v,vector<int> adj[],bool vis[],stack<int> &s)
{
    vis[v]=true;
    for(int i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i]])
        topso(adj[v][i],adj,vis,s);
    }
    s.push(v);
    
}
int* topoSort(int V, vector<int> adj[]) {
    static int a[50];
    stack<int> s;
    bool vis[V]={false};
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        topso(i,adj,vis,s);
    }
    int i=0;
    while(!s.empty())
    {
        a[i++]=s.top();
        s.pop();
    }
    return a;
}
