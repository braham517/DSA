Node *removeDuplicates(Node *head)
{
    Node* temp=head;
    while(temp&&temp->next)
    {
        if(temp->data==temp->next->data){
        Node* x=temp->next;
        delete x;
        temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    return head;
}
