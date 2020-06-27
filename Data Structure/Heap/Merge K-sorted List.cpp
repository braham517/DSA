int *mergeKArrays(int arr[][N], int k)
{
int* a=(int*)malloc(sizeof(int)*k*k);
int j=0;
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
for(int i=0;i<k;i++)
    pq.push({arr[i][0],{i,0}});
while(!pq.empty()){
    pair<int,pair<int,int>> p=pq.top();
    pq.pop();
    a[j++]=p.first;
    int row=p.second.first;
    int col=p.second.second+1;
    if(col<k)
    pq.push({arr[row][col],{row,col}});
}
return a;
}
