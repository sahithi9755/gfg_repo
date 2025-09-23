/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head==NULL){
            head=NULL;
        }
        Node* temp=head;
        if(temp->next==NULL){
            head=NULL;
        }
        temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->next==NULL){
                temp->next=NULL;
            }
            temp=temp->next;
        }
        return head;
    }
};