vector <int> countDistinct (int A[], int n, int k) {
    map<int,int> m;
    vector<int> v;
    for(int i=0;i<k;i++)
    {
        m[A[i]]++;
    }
    int dis=m.size();
    v.push_back(m.size());
    for(int i=k;i<n;i++)
    {
         if(m[A[i]]==0)
        dis++;
        m[A[i]]++;
        m[A[i-k]]--;
        if(m[A[i-k]]==0)
        dis--;
        v.push_back(dis);
    }
    return v;
}
