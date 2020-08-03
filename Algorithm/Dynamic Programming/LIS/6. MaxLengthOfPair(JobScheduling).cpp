bool compare(struct val a, struct val b) 
{ 
    if (a.first == b.first) 
        return a.second < b.second; 
    return a.first < b.first; 
} 
int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,compare);
    int l[n];
    l[0]=1;
    for(int i=1;i<n;i++)
    {
        l[i]=1;
        for(int j=0;j<i;j++)
        {
            if(p[j].second<p[i].first)
            l[i]=max(l[i],l[j]+1);
        }
    }
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    res=max(res,l[i]);
    return res;
}
