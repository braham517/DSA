#include <bits/stdc++.h>
using namespace std;
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
	   priority_queue<int,vector<int>, greater<int>> minh;
	   for(int i=0;i<n;i++)
	       minh.push(arr[i]);
	   long long int res=0;
	   while(minh.size()>=2)
	   {
	       int a=minh.top();
	       minh.pop();
	       int b=minh.top();
	       minh.pop();
	       res+=a+b;
	       minh.push(a+b);
	   }
	   cout<<res<<endl;
	}
	return 0;
}
