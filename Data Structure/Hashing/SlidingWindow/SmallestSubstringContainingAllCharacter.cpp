#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    map<char,int> m;
	    int x[26]={0};
	    for(int i=0;i<s.length();i++)
	    m[s[i]]++;
	    int k=m.size();
	    int st=0;
	    int minl=INT_MAX;
	    int dis=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(x[s[i]-'a']==0)
	        dis++;
	        x[s[i]-'a']++;
	         if(dis==k)
	            {
	                while(x[s[st]-'a']>1){
	                    x[s[st]-'a']--;
	                    st++;
	                }
	            
	            if(i-st+1<minl)
	            minl=i-st+1;
	            }
	    }
	    cout<<minl<<endl;
	}
	return 0;
}
