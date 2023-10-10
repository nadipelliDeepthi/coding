bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL || head->next==NULL)
    return false;
    Node *sl=head,*fst=head;
    while(fst!=NULL && fst->next!=NULL && fst->next->next!=NULL)
    {
        sl=sl->next;
        fst=fst->next->next;
        if(sl==fst)
        return true;
    }
    return false;
}










