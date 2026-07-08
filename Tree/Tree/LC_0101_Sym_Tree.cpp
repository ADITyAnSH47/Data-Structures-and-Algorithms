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
bool sym(TreeNode* &lef,TreeNode* &rig){
    if(!lef && !rig){
        return true;
    }
    if(!lef || !rig){
        return false;
    }
    if(rig->val!=lef->val){
        return false;
    }
    sym(lef->left,rig->right);
    sym(lef->right,rig->left); 
    return sym(lef->left,rig->right) && sym(lef->right,rig->left);
}
    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
};