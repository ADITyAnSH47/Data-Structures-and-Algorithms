class Solution {
public:
    vector<tuple<int,int,int>> nodes;

    void dfs(TreeNode* root, int row, int col) {
        if (!root) return;

        nodes.push_back({col, row, root->val});

        dfs(root->left, row + 1, col - 1);
        dfs(root->right, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        dfs(root, 0, 0);

        sort(nodes.begin(), nodes.end());

        vector<vector<int>> ans;

        int prevCol = INT_MIN;

        for (auto &[col, row, val] : nodes) {
            if (col != prevCol) {
                ans.push_back({});
                prevCol = col;
            }
            ans.back().push_back(val);
        }

        return ans;
    }
};