#include <bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int l[n];
    l[0]=1;
    for(int i=1;i<n;i++)
    {
        l[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            l[i]=max(l[i],l[j]+1);
        }
    }
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    res=max(res,l[i]);
    return n-res;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<lis(arr,n)<<endl;
	}
	return 0;
}
