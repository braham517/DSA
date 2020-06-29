using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.second!=b.second)
    return a.second>b.second;
    else
    return a.first<b.first;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int,int> m;
	    vector<pair<int,int>> v;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        m[arr[i]]++;
	    }
	    for(auto i:m)
	    {
	        pair <int,int> p =make_pair(i.first,i.second);
	        v.push_back(p);
	    }
	    sort(v.begin(),v.end(),compare);
	    for(int i=0;i<v.size();i++)
	    {
	        while(v[i].second--)
	        cout<<v[i].first<<" ";
	   }
cout<<endl;
	}
	return 0;
}
