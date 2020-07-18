node* rev(node* head,int k)
{
    if(head==NULL)
    return NULL;
    node* curr=head;
    node* prev=NULL;
    node* next=head;
    int c=0;
    while(curr!=NULL&&c<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        c++;
    }
    if(next!=NULL)
    {
        node* x=rev(next,k);
        head->next=x;
    }
    return prev;
}
