struct Node* reverseList(struct Node *head)
{
    Node*temp=head;
    Node*prev=NULL;
    Node* next=temp;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
    return head;
}
