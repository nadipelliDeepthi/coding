class LRUCache
{
public:
  class node {
      public:
        int key,val;
        node* next;
        node* prev;
        node(int k, int v) {
            key=k;
            val=v;
        }
    };
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
    int c;
   LRUCache(int capacity) {
    // Write your code here
      c=capacity;
      head->next=tail;
      tail->prev=head;
  }
  void addNode(node *newNode) {
    node *t=head->next;
    newNode->next=t;
    newNode->prev=head;
    head->next=newNode;
    t->prev=newNode;
  }
  void delNode(node *delnode) {
      node *delprev=delnode->prev;
      node *delnxt=delnode->next;
      delprev->next=delnxt;
      delnxt->prev=delprev;
  }
  unordered_map<int,node *>mp;

  int get(int key) {
      // Write your code here
      if (mp.find(key) != mp.end()) {
          node *res=mp[key];
          int v=res->val;
          mp.erase(key);
          delNode(res);
          addNode(res);
          mp[key]=head->next;
          return res;
      }
      //else
      return -1;
    }

    void put(int key, int value)
    {
        // Write your code here
      if (mp.find(key) != mp.end()) {
          node *n=mp[key];
          mp.erase(key);
          delNode(n);
      }
      if (mp.size() == c) {
          mp.erase(tail->prev->key);
          delNode(tail->prev);
      }
      addNode(new node(key,value));
      mp[key]=head->next;
    }
};
