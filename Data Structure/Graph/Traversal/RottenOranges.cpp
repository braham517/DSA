#include <bits/stdc++.h>
using namespace std;
bool is_inside(int r,int c,int i,int j){
    return (i<r && i>=0 && j<c && j>=0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int r,c;
	    cin >> r >> c;
	    int arr[101][101];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++)
	            cin >> arr[i][j];
	    }
	    queue<pair<int,int> >q;
	    int total=0;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(arr[i][j]==1 || arr[i][j]==2)
	                ++total;
	            if(arr[i][j]==2)
	                q.push(make_pair(i,j));
	        }
	    }
	   int cnt=0;
	    int tm=0;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
	    while(!q.empty()){
	        cnt+=q.size();
	        int s=q.size();
	        while(s--){
	            pair<int,int>x=q.front();
	            q.pop();
	            int row=x.first;
	            int col=x.second;
	            for(int i=0;i<4;i++)
	            {
	                int rr=row+dr[i];
	                int cc=col+dc[i];
	                if(is_inside(r,c,rr,cc)&&arr[rr][cc]==1)
	                {
	                    arr[rr][cc]=2;
	                    q.push({rr,cc});
	                }
	                
	            }
	        }
	        ++tm;
	    }
	    if(cnt==total)
	        cout << tm-1 << endl;
	    else
	        cout << "-1\n";
	}
	return 0;
}
