void connect(Node *root)
{
    queue<Node*> q;
    q.push(root);
    Node* curr = NULL;
    Node* prev=NULL;
    while (!q.empty())
    {
        int size = q.size();
        int i = 0;
        while (i < size)
        {   
            curr = q.front();
            q.pop();
            if(prev==NULL)
            prev=curr;
            else{
                prev->nextRight=curr;
                prev=curr;
            }
           if (curr->left)
                q.push(curr->left);
           if (curr->right)
                q.push(curr->right);
            i++;
        }
        prev=NULL;
    }
}
