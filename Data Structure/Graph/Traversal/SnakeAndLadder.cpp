#include<bits/stdc++.h>
using namespace std;
int dis(int mov[])
{
    int vis[31]={0};
    int dis[31];
    for(int i=0;i<31;i++){
    dis[i]=INT_MAX;
    }
    queue<int> q;;
    q.push(1);
    vis[1]=1;
    dis[1]=0;
    int x;
    while(!q.empty()){
        int a=q.front();
        q.pop();
       
        for(int j=a+1;j<=a+6&&j<=30;j++)
        {
            
            if(vis[j]==0)
            {
                if(mov[j]!=-1){
                 x=mov[j];
                }
                else{
                    x=j;
                }
                if(vis[x]==0){
               
                dis[x]=dis[a]+1;
                q.push(x);
                vis[x]=1;
                }
                
            }
        }
        
    }
    return dis[30];
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int mov[31];
	    for(int i=0;i<31;i++)
	    mov[i]=-1;
	    while(n--)
	    {
	        int a,b;
	        cin>>a>>b;
	        mov[a]=b;
	    }
	    cout<< dis(mov)<<endl;
	}
	return 0;
}
