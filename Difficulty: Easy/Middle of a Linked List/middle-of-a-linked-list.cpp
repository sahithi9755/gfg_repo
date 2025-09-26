/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node*temp=head;
        int c=0;
        while(temp!=NULL){
            c+=1;
            temp=temp->next;
        }
        temp=head;
        int m=(c/2)+1;
        c=0;
        while(temp!=NULL)
        {
            c+=1;
            if(m==c){
                return temp->data;
            }
            temp=temp->next;
        }
        return 0;
    }
};