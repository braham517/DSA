bool findTriplets(int arr[], int n)
{ 
    map<int,pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j){
            int a=arr[i]+arr[j];
            m[a]={i,j};
            }
        }
        
    }
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(-1*arr[i])!=m.end())
        {
            pair<int,int> a=m[-1*arr[i]];
            if(a.first!=i&&a.second!=i)
            return true;
        }
    }
    return false;
}
