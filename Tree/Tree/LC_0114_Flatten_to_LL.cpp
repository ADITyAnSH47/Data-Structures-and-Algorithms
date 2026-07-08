/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        TreeNode* prev=NULL;

     void flatten(TreeNode* root) {
        if(root==NULL){
            return;
        }
       
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;
        
        
    }
};
 
// useful test case:
//        1
//        /\
//       2  5
//      /\    \
//      3 4     6 

//      result->1,2,3,4,5,6