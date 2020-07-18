int GetNth(struct node* head, int index){
  for(int i=0;i<index-1;i++)
  head=head->next;
  return head->data;
}
