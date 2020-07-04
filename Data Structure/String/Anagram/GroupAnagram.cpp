#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            sort(a.begin(),a.end());
            m[a]++;
        }
        vector<int> v;
        for(auto i:m)
        {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
