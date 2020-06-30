void levelOrder(Node* root)
{
 
    queue<Node*> q;
    q.push(root);
    Node* curr = NULL;
    while (!q.empty())
    {
        int size = q.size();
        int i = 0;
        while (i < size)
        {   
            curr = q.front();
            q.pop();
                cout<<curr->data<< " ";

           if (curr->left)
                q.push(curr->left);

           if (curr->right)
                q.push(curr->right);
            i++;
        }
        cout<<"$"<<" ";
    }
}


