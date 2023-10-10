Node *findMiddle(Node *head) {
    // Write your code here
    Node *fp=head,*sp=head;
    while (fp->next!=NULL && fp->next->next!=NULL && fp!=NULL)
    {
       sp=sp->next;
       fp=fp->next->next;
    }
    if(fp->next!=NULL)
    return sp->next;
    return sp;
}
