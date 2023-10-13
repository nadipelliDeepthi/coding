/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    if(head==NULL || head->next==NULL)
    return head;
    Node *d1=new Node(0),*ev=d1;
    Node *d2=new Node(0),*odd=d2;
    Node *curr=head;
    while(curr!=NULL)
    {
        if((curr->data)%2==0)
        {
        ev->next=curr;
        ev=ev->next;
        }
        else
        {
            odd->next=curr;
            odd=odd->next;
        }
        curr=curr->next;
    }
    ev->next=d2->next;
    odd->next=NULL;
    return d1->next;
}
