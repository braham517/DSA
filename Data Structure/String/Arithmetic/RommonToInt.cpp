int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 
int Solution::romanToInt(string A) {
    int res=0;
    for(int i=0;i<A.length();i++)
    {
        int a=value(A[i]);
        if(i+1<A.length()){
            int b=value(A[i+1]);
            if(a>=b)
            res+=a;
        else{
            res+=b-a;
            i++;
            }
        }
        else
        res+=a;
    }
    return res;
}
