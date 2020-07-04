#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    reverse(a.begin(),a.end());
	    reverse(b.begin(),b.end());
	    int rem=0;
	    string f;
	 
	    for(int i=0;i<max(a.length(),b.length());i++)
	    {
	        int ans=0;
	        if(i<a.length())
	        ans+=a[i]-'0';
	        if(i<b.length())
	        ans+=b[i]-'0';
	        ans+=rem;
	        rem=ans/10;
	        f.push_back((ans%10)+'0');
	        ans=0;
	    }
	    if(rem!=0)
	    f.push_back(rem+'0');
	    reverse(f.begin(),f.end());
	    reverse(a.begin(),a.end());
	    if(f.length()==a.length())
	    cout<<f<<endl;
	    else
	    cout<<a<<endl;
	}
	return 0;
}
