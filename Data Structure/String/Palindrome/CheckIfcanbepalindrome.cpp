#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int x[26]={0};
	    for(int i=0;i<s.length();i++)
	    {
	        x[s[i]-'a']++;
	    }
	    int c=0;
	    for(int i=0;i<26;i++){
	        if(x[i]%2!=0)
	        c++;
	    }
	    if(c>1)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}
