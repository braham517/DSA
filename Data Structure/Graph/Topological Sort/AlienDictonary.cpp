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
stack<int> topoSort(int V, vector<int> adj[]){
    stack<int> s;
    bool vis[V]={false};
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        topso(i,adj,vis,s);
    }
    return s;
}
string findOrder(string dict[], int N, int K) {
    vector<int> adj[K];
    for(int i=0;i<N-1;i++)
    {
        string a=dict[i];
        string b=dict[i+1];
        for(int i=0;i<min(a.length(),b.length());i++)
        {
            if(a[i]!=b[i])
            {
                adj[a[i]-'a'].push_back(b[i]-'a');
                break;
            }
        }
    }
    stack<int> s;
    s=topoSort(K,adj);
    string res;
    while(!s.empty())
    {
        res.push_back(s.top()+'a');
        s.pop();
    }
    //cout<<res<<" ";
    return res;
}
