#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	 
	    int val = n+1;
	    for(int i=0;i<n;i++){
	        arr[(arr[i])%val - 1]+=val; 
	    }
	    for(int i=1;i<=n;i++){
	        int x = (arr[i-1]-(arr[i-1]%val))/val;
	        cout<<x<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
