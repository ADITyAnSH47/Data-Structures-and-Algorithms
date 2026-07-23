/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head){
            return head;
        }
        stack<Node*> st;
        Node* temp=head;
        while(temp){
          if (temp->child) {

                if (temp->next) {
                    st.push(temp->next);
                    temp->next->prev = NULL;
                }

                temp->next = temp->child;
                temp->child->prev = temp;
                temp->child = NULL;
            }
            if(temp->next==NULL && !st.empty()){
                temp->next=st.top();
                st.pop();
                temp->next->prev=temp;
            }
            temp=temp->next;


        }
        return head;

        
    }
};