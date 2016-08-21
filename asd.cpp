/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node * temp = (struct Node * )malloc(sizeof(struct Node));
    temp -> data = data;
    Node *p=head,*par=NULL;
    int i = 0;
    if(head == NULL)
        {
        temp -> next = NULL;
        head = temp;
        return head;
    }
    
    while(i != position)
        {
        par = p;
        p = p->next;
        i++;
    }
    if( p == NULL)
        {
        par -> next = temp;
        temp -> next = NULL;
        return head;
   
    }
    else
        {
            par -> next = temp;
    temp -> next = p;
        
    }

    return head;
    
    
    
    
}
