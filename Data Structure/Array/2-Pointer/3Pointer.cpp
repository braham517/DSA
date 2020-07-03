vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int> > anss;
    set<vector<int>> se;
    vector<int> v;
    sort(A.begin(), A.end());
    int n = A.size(), left, right, diff = INT_MAX;
    long sum;
    for(int i=0; i<n-2; i++){
        left = i+1; right = n-1;
        while(left < right){
            sum = (long long)A[i]+A[left]+A[right];
            if(sum==0){
                v.push_back(A[i]);
                v.push_back(A[left]);
                v.push_back(A[right]);
                anss.push_back(v);
                v.clear();
                left++;
            }
            if(sum < 0) left++;
            else right--;
        }
    }
    sort(anss.begin(),anss.end());
    anss.erase(unique(anss.begin(),anss.end()),anss.end());
    return anss;
}
