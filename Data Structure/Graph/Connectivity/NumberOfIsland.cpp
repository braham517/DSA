vector<int> v1={1,-1,0,0,1,1,-1,-1};
vector<int> v2={0,0,1,-1,1,-1,1,-1};
int issafe(int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m){
        return 0;
    }
    return 1;
}
void dfs(vector<int> A[],vector<vector<int>> &vis,int i,int j,int N,int M){
    vis[i][j]=1;
    for(int k=0;k<8;k++){
        int u=i+v1[k];int v=j+v2[k];
        if(issafe(u,v,N,M)&&vis[u][v]==0&&A[u][v]){
            dfs(A,vis,u,v,N,M);
        }
    }
}
int findIslands(vector<int> A[], int N, int M) {
    vector<vector<int>> vis(N,vector<int> (M,0));
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(!vis[i][j]&&A[i][j]){
                ans++;dfs(A,vis,i,j,N,M);
            }
        }
    }
    return ans;
}
