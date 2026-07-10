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
void inorder(vect  or<int> &ans,TreeNode* &root){
    if(root==NULL){
        return;
    }
    inorder(ans,root->left);
    ans.push_back(root->val);
    inorder(ans,root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(ans,root);
        return ans[k-1];
    }
};