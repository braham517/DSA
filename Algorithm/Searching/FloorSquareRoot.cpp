long long int floorSqrt(long long int x) 
{
    long long int l=1,h=x,mid,res=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(mid*mid<=x)
        {
            res=mid;
            l=mid+1;
        }
        else
        h=mid-1;
    }
    return res;
}
