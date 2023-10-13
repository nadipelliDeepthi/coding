/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
    Node* mergeList(Node *l1,Node *l2)
    {
        Node *dummy=new Node(-1);
        Node *curr=dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->data<=l2->data)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else
            {
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1!=NULL)
        {
        curr->next=l1;
        //l1=l1->next;
        }
        if(l2!=NULL)
        {
        curr->next=l2;
        //l2=l2->next;
        }
        return dummy->next;
    }
Node* sortList(Node* head){
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return head;
        Node *temp=NULL;
        Node *sl=head,*fst=head;
        while(fst!=NULL && fst->next!=NULL)
        {
            temp=sl;
            sl=sl->next;
            fst=fst->next->next;
        }
        temp->next=NULL;
        Node *l1=sortList(head);
        Node *l2=sortList(sl);
        return mergeList(l1,l2);
}
