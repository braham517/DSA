using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str1,str2;
	    cin>>str1>>str2;
	    int x[26]={0};
int y[26]={0};

for(int i=0;i<str1.length();i++)
x[str1[i]-'a']++;
for(int i=0;i<str2.length();i++)
y[str2[i]-'a']++;
string s;
for(int i=0;i<26;i++)
{
    if(x[i]==0&&y[i]!=0)
    s.push_back(i+'a');
    else if(x[i]!=0&&y[i]==0)
    s.push_back(i+'a');
}
sort(s.begin(),s.end());
cout<<s<<endl;
}
	return 0;
}
