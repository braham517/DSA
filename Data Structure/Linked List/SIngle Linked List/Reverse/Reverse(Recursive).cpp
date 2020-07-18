Node* reverse(Node* head,Node* prev)
{
    if(head==NULL)
    return prev;
    Node* next=head->next;
    head->next=prev;
    prev=head;
    return reverse(next,prev);
}
struct Node* reverseList(struct Node *head)
{
   return reverse(head,NULL);
}
