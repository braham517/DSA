int ispalin(string A,int i,int j)
{
    while(i<j)
    {
        if(A[i]!=A[j])
        return 0;
        i++;
        j--;
    }
    return 1;
}
int Solution::solve(string A) {
    int i=0;
    int j=A.length()-1;
    while(i<j)
    {
        if(A[i]==A[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            return ispalin(A,i+1,j)||ispalin(A,i,j-1);
        }
    }
    return 1;
} 
