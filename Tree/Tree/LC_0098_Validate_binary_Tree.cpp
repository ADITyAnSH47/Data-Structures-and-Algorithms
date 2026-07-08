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
void inorder(vector<int> &ans,TreeNode* root){
if(root==NULL){
    return;
}
inorder(ans,root->left);
ans.push_back(root->val);
inorder(ans,root->right);

}
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(ans,root);
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]>=ans[i]){
                return false;
            }
        }       
        return true; 
    }
};