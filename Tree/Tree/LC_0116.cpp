/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return NULL;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            Node* rig=nullptr;
            for(int i=0;i<s;i++){
               auto nod=q.front();
                q.pop();
                nod->next=rig;
                rig=nod;
                if(nod->right){
                    q.push(nod->right);
                    q.push(nod->left);
                }
            }
        }
        return root;
    }
};