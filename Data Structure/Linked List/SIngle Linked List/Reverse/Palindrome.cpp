int count(Node *head){
    if(head==NULL)
    return 0;
    return 1+count(head->next);
    
}
bool isPalindrome(Node *head)
{
    int x=count(head);
    stack<int> s;
    int y=x/2;
    Node* temp=head;
    while(y--){
        int t=temp->data;
        s.push(t);
        temp=temp->next;
    }
    if(x%2!=0)
    temp=temp->next;
    while(temp!=NULL){
        if(s.top()==temp->data){
            s.pop();
        }
        else{
            return 0;
        }
        temp=temp->next;
    }
     if (s.empty()) { 
        return 1; 
    } 
    else
    return 0;
}
