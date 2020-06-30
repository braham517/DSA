int height(Node* node)
{
   if(node==NULL)
   return 0;
   int a=height(node->left);
   int b=height(node->right);
   return 1+max(a,b);
}
