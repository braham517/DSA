using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        long long int count=0;
        for(long long int i=n-1;i>=1;i--)
        {
            long long int l=0;
            long long int r=i-1;
            while(l<r)
            {
                if(arr[l]+arr[r]>arr[i])
                {
                    count+=r-l;
                    r--;
                }
                else
                l++;
            }
          
        }
          cout<<count<<endl;
	}
	
	return 0;
}
