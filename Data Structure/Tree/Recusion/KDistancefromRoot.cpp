void printKD(struct Node *root,int p, int k){
    if(root==NULL)
    return;
    if(p==k)
    cout<<root->data<<" ";
    printKD(root->left,p+1,k);
    printKD(root->right,p+1,k);
}
void printKdistance(struct Node *root, int k)
{
  printKD(root,0,k);
}
