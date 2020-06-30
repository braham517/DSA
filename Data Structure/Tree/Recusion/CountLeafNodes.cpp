int countLeaves(Node* root)
{
  if(root==NULL)
  return 0;
  if(root->left==NULL&&root->right==NULL)
  return 1;
  int a=countLeaves(root->left);
  int b=countLeaves(root->right);
  return(a+b);
}
