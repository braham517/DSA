#include <bits/stdc++.h>
using namespace std;
int mins(int n)
{
    int arr[n+1]={INT_MAX};
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    for(int i=4;i<=n;i++)
    {
        arr[i]=i;
        for(int j=1;j*j<=n;j++)
        {
            if(i-(j*j)>=0)
            arr[i]=min(arr[i],arr[i-(j*j)]+1);
        }
    }
    return arr[n];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<mins(n)<<endl;
	}
	return 0;
}
