int dm(Node* root, int &res)
{
    if(root==NULL)
    return 0;
    int l=dm(root->left,res);
    int r=dm(root->right,res);
    int temp=max(l,r)+1;
    int rr=max(temp,l+r+1);
    res=max(res,rr);
    return temp;
}

int diameter(Node* node) {
   int res=0;
   int p=dm(node,res);
   return res;
}
