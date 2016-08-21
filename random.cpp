Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 

  Node *p = head;

  if(p==NULL)
  {
    Node * temp;
    temp = (Node *)malloc(sizeof(Node));
    temp -> next = NULL;
    temp -> data = data;
    temp -> prev = NULL;
    return temp;
  }

  while(p != NULL)
  {
    if(p -> data > data)
    {
      Node * temp;
      temp = (Node *)malloc(sizeof(Node));
      temp -> next = p;
      temp -> data = data;
      temp -> prev = p -> prev;
      p -> prev = temp;
      if(p == head)
      {
        return temp;
      }

      p -> prev -> next = temp;
    }
    p = p->next;
  }
  return head;
}