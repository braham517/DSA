int getNthFromLast(Node *head, int n)
{
       Node *temp1,*temp2;
       temp1=head;
       temp2=head;
       for(int i=0;i<n;i++){
             if(temp2==NULL)
            return -1;
            temp2=temp2->next;
       }
       while(temp2!=NULL){
           temp1=temp1->next;
           temp2=temp2->next;
       }
       return temp1->data;
}
