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
int left(TreeNode* root){
    
       if(root==NULL){
        return 0;
       } 
       int l=minDepth(root->left);
       return 1+l;
}
int right(TreeNode* root){
    
       if(root==NULL){
        return 0;
       } 
       int r=minDepth(root->right);
       return 1+r;
}
    int minDepth(TreeNode* root) {

       if(root==NULL){
        return 0;
       } 
       if(!root->left && !root->right){
        return 1;
       }
       if(root->right && !root->left){
       return right(root);
       }
       if(root->left && !root->right){
        return left(root);        
       }

    //    int l=minDepth(root->left);
    //    int r=minDepth(root->right);
       return min(left(root),right(root));
    }
};