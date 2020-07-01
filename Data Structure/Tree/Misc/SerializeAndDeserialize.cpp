void serialize(Node *root,vector<int> &A)
{
    if(root==NULL){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}

int indexArr = 0;
Node * deSerializeC(vector<int> &arr)
{
    if(arr.size() == indexArr)
        return NULL;
    int val = arr[indexArr];
    indexArr++;
    if(val == -1)
        return NULL;
    Node *root = new Node(val);
    root->left  = deSerializeC(arr);
    root->right = deSerializeC(arr);
    return root;
}
Node * deSerialize(vector<int> &arr)
{
    indexArr = 0;//global var need to inialize again 
    return deSerializeC(arr);
}
