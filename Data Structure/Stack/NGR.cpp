#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<long long int> s;
	    vector<long long int> v;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(s.empty()==true)
	        v.push_back(-1);
	        else{
	            while(s.top()<=arr[i]&&!s.empty())
	            {
	            s.pop();
	            }
	            if(s.empty())
	             v.push_back(-1);
	            else
	             v.push_back(s.top());
	        }
	        s.push(arr[i]);
	    }
	    reverse(v.begin(),v.end());
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
