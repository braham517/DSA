void topView(struct Node *root)
{ 

if(root==NULL)
    return;
    int d=0;
    map<int,vector<int>> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,d));
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
         d=temp.second;
        Node* a=temp.first;
        m[d].push_back(a->data);
        if(a->left)
        q.push(make_pair(a->left,d-1));
        if(a->right)
        q.push(make_pair(a->right,d+1));
    }
    for(auto i:m)
    {
        cout<<i.second[0]<<" ";
    }
 }   
 
