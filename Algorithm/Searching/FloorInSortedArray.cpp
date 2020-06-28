using namespace std;
int bs(int arr[],int n,int x)
{
    int st=0;
    int end=n-1;
    int mid;
    int res=-1;
    while(st<=end)
    {
        mid=(st+end)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]<x){
        res=mid;
        st=mid+1;
        }
        else if(arr[mid]>x)
        end=mid-1;
    }
    return res;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<bs(arr,n,m)<<endl;
	}
	return 0;
}
