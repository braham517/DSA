#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V,int E,vector<vector<int> > graph);
// Driver code

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int V,E;
        cin>>V>>E;
        vector< vector<int> > graph(V,vector<int>(V,INT_MAX));

        while(E--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            u--,v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout<<spanningTree(V,E,graph)<<endl;
    }
    return 0;
}

// } Driver Code Ends

// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
int find_min(int key[], bool vis[], int V){
    int min=INT_MAX, vertex;
    for(int i=0;i<V;i++){
        if(vis[i]==false && key[i]<min){
            vertex=i;
            min=key[i];
        }
    }
    return vertex;
}
int spanningTree(int V,int E,vector<vector<int> > graph)
{
    // code here
    int key[V];
    bool mst[V];
    int parent[V];
    for(int i=0;i<V;i++) key[i]=INT_MAX,mst[i]=false;
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<V-1;i++)
    {
        int u=find_min(key,mst,V);
        mst[u]=true;
        for(int j=0;j<V;j++)
        {
            if(graph[u][j]!=INT_MAX&&mst[j]==false&&graph[u][j]<key[j])
            {
                key[j]=graph[u][j];
                parent[j]=u;
            }
        }
    }
     int weight=0;
    for(int i=0;i<V;i++){
        weight+=graph[i][parent[i]];
    }
    return weight;

    
}
