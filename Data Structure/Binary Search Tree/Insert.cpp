Node* insert(Node* root, int Key)
{
    
    if(root==NULL)
    {
        Node* temp=new Node(Key);
        return temp;
    }
    if(root->data==Key)
    return root;
    if(root->data>Key)
    {
        if(root->left==NULL)
        {
            Node* temp=new Node(Key);
            root->left=temp;
        }
        else
        return insert(root->left,Key);
    }
    if(root->data<Key)
    {
        if(root->right==NULL)
        {
            Node* temp=new Node(Key);
            root->right=temp;
        }
        else
        return insert(root->right,Key);
    }
    return root;
}
