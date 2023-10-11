Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *t1=head,*t2,*t3=head;
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    int val=c-K,r=1;
    if(val!=0)
    {
      while (r != val) {
        t1 = t1->next;
        r++;
      }
    }
    else
    return t3->next;
    if(t1!=NULL)
    t2=t1->next;
    if(t2!=NULL)
    t1->next=t2->next;
     return t3;
}
