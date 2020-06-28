using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	            cin>>arr[i][j];
	    }
	    int k;
	    cin>>k;
	    int i=0;
        int j=m-1;
        int flag=0;
         while(i>=0&&i<n&&j>=0&&j<m)
        {
        if(arr[i][j]==k){
            cout<<1<<endl;
            flag=1;
            break;
        }
        else if(arr[i][j]>k)
        j--;
        else if(arr[i][j]<k)
        i++;
    }
    if(flag==0)
    cout<<0<<endl;
	}
	return 0;
}
