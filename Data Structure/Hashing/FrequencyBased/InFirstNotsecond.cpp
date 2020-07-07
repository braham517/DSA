using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m;
	    cin>>n>>m;
	    long long int arr1[n],arr2[m];
	    for(long long int i=0;i<n;i++)
	    cin>>arr1[i];
	    for(long long int i=0;i<m;i++)
	    cin>>arr2[i];
	    unordered_map<long long int,long long int> mp;
	    for(long long int i=0;i<m;i++)
	    {
	        mp[arr2[i]]++;
	    }
	    for(long long int i=0;i<n;i++)
	    {
	        if(mp.find(arr1[i])==mp.end())
	        cout<<arr1[i]<<" ";
	    	        else
	            continue;
	    }
	    cout<<endl;
	}
	return 0;
}
