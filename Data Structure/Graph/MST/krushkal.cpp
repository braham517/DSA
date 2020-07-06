#include<bits/stdc++.h>
using namespace std;
 int find(int u,vector<int> &parent) 
    { 
        if (u == parent[u])
        return u;
        else 
            return find(parent[u],parent);  
    } 
void merge(int x, int y,vector<int> &rank,vector<int> &parent) 
{ 
    x = find(x,parent), y = find(y,parent); 
    parent[x]=y;
} 
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,pair<int,int>>> m;
    for(int i=0;i<e;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        m.push_back({c,{a,b}});
    }
    sort(m.begin(),m.end());
    int wt=0;
    vector<int> parent;
    vector<int> rank;
    for(int i=0;i<=n;i++){
    parent.push_back(i);
    rank.push_back(0);
    }
    for(int i=0;i<m.size();i++)
    {
        int a=m[i].second.first;
        int b=m[i].second.second;
        int x=find(a,parent);
        int y=find(b,parent);
        if(x!=y)
        {
            wt+=m[i].first;
            merge(x,y,rank,parent);
        }

    }
    cout<<wt<<endl;
    return 0;
}
