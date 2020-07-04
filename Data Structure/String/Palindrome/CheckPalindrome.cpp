int isvalid(char c)
{
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
    return 1;
    else if(c>='0'&&c<='9')
    return 1;
    return 0;
}
int Solution::isPalindrome(string A) {
    int i=0;
    int j=A.length()-1;
    while(i<j)
    {
        if(!isvalid(A[i]))
        {
            i++;
            continue;
        }
        if(!isvalid(A[j]))
        {
            j--;
            continue;
        }
        if(tolower(A[i])!=tolower(A[j]))
        return 0;
        i++;
        j--;
    }
    return 1;
}
