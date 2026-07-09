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
    TreeNode* searchBST(TreeNode* root, int val) {
        // if(root==NULL){
        //     return NULL;
        // }
        while(root){
        if(root->val==val){
            return root;
        }
        if(val>root->val && root->right!=NULL){
            root=root->right;
             }else if(val>root->val && root->right==NULL){
                return NULL;
             }
        if(val<root->val && root->left!=NULL){
            root=root->left;
        }else if(val<root->val && root->left==NULL){
                return NULL;
             }
        }
        // if(root->left){
        //     root=root->left;       
        // }
         return NULL;

    }
};
// some checks can be reduced