#include<iostream>
#include<queue>
using namespace std;

void bfs(int source,vector<int> adj[])
{
    queue<int> q;
    bool visited[10]={false};
    q.push(source);
    visited[source]=true;
    while(!q.empty())
    {
        int i=q.front();
        q.pop();
        cout<<i<<" ";

        for(int j=0;j<adj[i].size();j++)
        {
            if(!visited[adj[i][j]])
            {
                visited[ adj[i][j] ] = true;
                q.push( adj[i][j] );
            }

        }
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
    bfs(source,adj);
}
