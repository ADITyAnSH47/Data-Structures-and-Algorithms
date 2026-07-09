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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            root=new TreeNode(val);
            return root;
        }
        TreeNode *prev=root;
        while(prev){
            if(val>prev->val){
                if(prev->right){
               prev=prev->right;
                }else{
                    break;
                }
            }
            else if(val<prev->val){
                if(prev->left){
                prev=prev->left;
                }else{
                    break;
                }
            }
        }

        if(val>prev->val){
            prev->right=new TreeNode(val);
        }else{
           prev->left=new TreeNode(val);

        }
        return root;
    }
};