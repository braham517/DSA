#include<iostream>
#include<queue>
using namespace std;


void dfsUtil(int source,vector<int> adj[],bool visited[])
{
    visited[source]=true;
    cout<<source<<" ";
    for(int j=0;j<adj[source].size();j++)
    {
        if(!visited[ adj[source][j] ] )
            dfsUtil(adj[source][j],adj,visited);
    }
}
void dfs(int source,vector<int> adj[],int nodes)
{
    bool visited[10]={false};
    for(int i=0;i<nodes;i++)
    {
        if(!visited[i])
            dfsUtil(i,adj,visited);
    }
}
int main()
{
    vector<int> adj[10];
    int nodes;
    cin>>nodes;
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source;
    cout<<"Enter the source:";
    cin>>source;
    dfs(source,adj,nodes);


}
/*
6
6
0 1
0 2
1 3
2 3
2 4
3 5
/*
dfs.cpp
