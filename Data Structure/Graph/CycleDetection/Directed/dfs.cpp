
bool dfs(int v, vector<int> adj[], bool vis[], bool rec[])
{
   if(vis[v] == false) 
    { 
        // Mark the current node as visited and part of recursion stack 
        vis[v] = true; 
        rec[v] = true; 
  
        // Recur for all the vertices adjacent to this vertex 
 
        for(int i =0; i<adj[v].size(); i++) 
        { 
            if (!vis[adj[v][i]] && dfs(adj[v][i],adj,vis,rec) ) 
                return true; 
            else if (rec[adj[v][i]]) 
                return true; 
        } 
  
    } 
    rec[v] = false;  // remove the vertex from recursion stack 
    return false; 
}
bool isCyclic(int V, vector<int> adj[])
{
     bool vis[V] = {false};
     bool rec[V]={false};
     for(int i =0; i<V; i++){
       if(dfs(i,adj,vis,rec)) return true;
   }
   return false;
}
