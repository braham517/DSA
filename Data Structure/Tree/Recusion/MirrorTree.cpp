void mirror(Node* node) 
{
     if(node==NULL)
     return;
     if(node->left==NULL&&node->right==NULL)
     return;
     mirror(node->left);
     mirror(node->right);
     Node *temp=node->left;
     node->left=node->right;
     node->right=temp;
}
