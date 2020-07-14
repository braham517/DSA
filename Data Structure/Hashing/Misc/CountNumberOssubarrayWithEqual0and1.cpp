long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        arr[i]=-1;
    }
    unordered_map<int,int> map;
    int ans = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        ans++;
        if(map.find(sum)!=map.end())
        {
            ans+=map[sum];
        }
        map[sum]++;
    }
    return ans;	
}
