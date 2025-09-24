/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node*temp=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        Node*res=NULL;
        Node*tail=NULL;
        while(!st.empty()){
            Node*newnode=new Node(st.top());
            if(res==NULL){
                res=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
            st.pop();
        }
        return res;
    }
};