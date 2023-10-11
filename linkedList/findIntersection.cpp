Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *dummy1=firstHead,*dummy2=secondHead;
    while(dummy1!=dummy2)
    {
        if(dummy1==NULL)
        {
            dummy1=secondHead;
        }
        else
        dummy1=dummy1->next;
        if(dummy2==NULL)
        {
            dummy2=firstHead;
        }
        else
        dummy2=dummy2->next;
    }
    return dummy2;
}
