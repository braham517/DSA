void levelOrder(Node* node)
{
  queue<Node *> q;
  q.push(node);
  int nc;
  Node* temp;
  while(!q.empty())
  {

    nc=q.size();
    while(nc--){
    temp=q.front();
    q.pop();
    cout<<temp->data<<" ";
    if(temp->left!=NULL)
        q.push(temp->left);
    if(temp->right!=NULL)
          q.push(temp->right);
  }
