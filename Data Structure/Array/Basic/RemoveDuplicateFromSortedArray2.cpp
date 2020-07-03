int Solution::removeDuplicates(vector<int> &A) {
    int j=0;
    int a=0;
    for(int i=0;i<A.size()-1;i++)
    {
        
        if(A[i]==A[i+1]&&a==0){
        A[j++]=A[i];
        a++;
        }
        else if(A[i]==A[i+1])
            continue;
        else{
            A[j++]=A[i];
            a=0;
        }
  }
  A[j++]=A[A.size()-1];
  return j;  
}
