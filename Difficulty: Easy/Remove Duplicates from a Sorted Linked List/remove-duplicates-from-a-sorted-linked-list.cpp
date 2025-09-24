/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        map<int,int>m;
        Node*temp=head;
        Node*res=NULL;
        Node*tail=NULL;
        while(temp!=NULL){
            m[temp->data]++;
            temp=temp->next;
        }
        for(auto itr:m){
            Node *newnode=new Node(itr.first);
            if(res==NULL){
                res=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        return res;
    }
};