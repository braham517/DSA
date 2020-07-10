
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int w=0;
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    w+=arr[i];
	    }
	    int flag=0;
    if(w%2!=0){
    cout<<"NO"<<endl;
    }
    else{
	    w=w/2;
	  bool t[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0)
            t[i][j]=false;
            else if(j==0)
            t[i][j]=true;
            else if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
            }
            else
            t[i][j]=t[i-1][j];
        }        
    }
    if(t[n][w]==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	}
	return 0;
}
