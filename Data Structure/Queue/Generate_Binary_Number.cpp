#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    queue<string> q;
	    q.push("1");
	    while(n--)
	    {
	        string a=q.front();
	        q.pop();
	        cout<<a<<" ";
	        string b=a;
	        q.push(b+"0");
	        q.push(b+"1");
	    }
	    cout<<endl;
	}
	return 0;
}
