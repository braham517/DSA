#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    //cout<<n<<p;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    m[arr[i]]++;
	    int f=1;
	    for(int i=0;i<n;i++)
	    {
	        if(m[arr[i]]==p){
	            cout<<arr[i]<<endl;
	            
	            f=0;
	            break;
	        }
	        
	    }
	    if(f==1)
	    cout<<-1<<endl;
	}
	return 0;
}
