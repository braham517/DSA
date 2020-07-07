vector<int> Solution::twoSum(const vector<int> &A, int B) {
vector<int> res;
unordered_map<int,int> m;
for(int i=0;i<A.size();i++)
{
int k=B-A[i];
if(m.find(k)!=m.end())
{
res.push_back(m.at(k)+1);
res.push_back(i+1);
return res;
}
if(m.find(A[i]) == m.end())
{
m[A[i]]=i;
}
}
return res;
    
}
