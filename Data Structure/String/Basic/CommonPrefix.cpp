string Solution::longestCommonPrefix(vector<string> &A) {
    sort(A.begin(),A.end());
    string res;
  string a=A[0];
  string b=A[A.size()-1];
  for(int i=0;i<min(a.size(),b.size());i++)
  {
      if(a[i]==b[i])
      res.push_back(a[i]);
      else
      return res;
  }
  return res;
}
