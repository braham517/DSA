#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int parent[100];



int bfs(int s,int d)
{
    queue<int> q;
    bool vis[100]={false};


    int u;
    int distance[100];
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
                parent[u]=temp;
                q.push(u);
            }

        }
    }
    return distance[d];
}

int main()
{
    int nodes;
    int edges;
    int s;
    int d;
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x;
        cin>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"Enter source and destination to find distance and path";
    cin>>s;
    cin>>d;

    int t=bfs(s,d);
    cout<<t;
    cout<<endl;
    cout<<"Path is"<<" ";

    while(d!=s)
    {
        cout<<d<<"-->";
        d=parent[d];
    }
    cout<<s;
}
