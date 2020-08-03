#include <bits/stdc++.h>
using namespace std;
int eq(int arr[],int n)
{
    int lsum=0;
    for(int i=0;i<n;i++)
    lsum=lsum+arr[i];
    int rsum=0;
    for(int i=n-1;i>=0;i--){
        lsum-=arr[i];
        if(lsum==rsum)
        return i+1;
        else
        rsum+=arr[i];
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<eq(arr,n)<<endl;
	}
	return 0;
}
