int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(A[i]-B)!=m.end()||m.find(A[i]+B)!=m.end())
        return 1;
        m[A[i]]++;
    }
    return 0;
}
