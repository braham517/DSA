#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    int b;
	    cin>>a>>b;
	    a=a^b;
	    int c=0;
	    while(a)
	    {
	        a=a&(a-1);
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
