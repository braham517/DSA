#include<bits/stdc++.h>
using namespace std;
void equal(int arr[],int n,int sum)
{
    bool t[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    t[0][i]=false;
    for(int i=0;i<=n;i++)
    t[i][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
            else
            t[i][j]=t[i-1][j];
        }
    }
    if(t[n][sum])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        equal(arr,n,sum/2);
    }
}
