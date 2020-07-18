int getMiddle(Node *head)
{
    if(head==NULL)
    return -1;
    Node *temp1=head;
    Node *temp2=head;
    while(temp2!=NULL&&temp2->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next->next;
    }
    return temp1->data;
}
