#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int x[26]={0};
	    for(int i=0;i<s.length();i++)
	    x[s[i]-'a']++;
	    map<int,int> m;
	    for(int i=0;i<26;i++)
	    {
	       if(x[i]!=0)
	       m[x[i]]++;
	    }
	    vector<int> a,b;
	    for(auto i:m)
	    {
	        //cout<<i.first<<" "<<i.second<<endl;
	        a.push_back(i.first);
	        b.push_back(i.second);
	    }
	    if(a.size()==1)
	    cout<<1<<endl;
	    else if(a.size()>2)
	    cout<<0<<endl;
	    else{
	    if(abs(a[0]-a[1])<=1&&(b[0]==1||b[1]==1))
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	}
	return 0;
}
