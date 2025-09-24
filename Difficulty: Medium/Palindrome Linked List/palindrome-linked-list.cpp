/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node*temp=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()&&temp!=NULL){
            if(temp->data==st.top()){
                st.pop();
            }
            temp=temp->next;
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};