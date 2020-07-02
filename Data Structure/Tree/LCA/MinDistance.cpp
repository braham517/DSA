Node* LCA(Node * root, int n1,int n2) 
{ 
    if (root == NULL) 
       return root; 
    if (root->data == n1 || root->data == n2) 
       return root; 
  
    Node* left = LCA(root->left, n1, n2); 
    Node* right = LCA(root->right, n1, n2); 
  
    if (left != NULL && right != NULL) 
         return root; 
    if (left != NULL) 
        return LCA(root->left, n1, n2); 
  
    return LCA(root->right, n1, n2); 
} 
  
int level1(Node*root ,int key,int level)
{
    if(root==NULL)
    return -1;
    if(root->data==key)
    return level;
    int a=level1(root->left,key,level+1);
    if(a==-1){
    int b=level1(root->right,key,level+1);
    return b;
    }
    return a;
}
int findDist(Node* root, int a, int b) {
    Node*lca=LCA(root,a,b);    
    return level1(lca,a,0)+level1(lca,b,0);
}
