int summ(Node* root, int &res)
{
    if(root==NULL)
    return 0;
    int l=dm(root->left,res);
    int r=dm(root->right,res);
    int temp=max(l,r)+root->data;
    int rr=max(temp,l+r+root->data);
    res=max(res,rr);
    return temp;
}

int sum(Node* node) {
   int res=0;
   int p=summ(node,res);
   return res;
}
