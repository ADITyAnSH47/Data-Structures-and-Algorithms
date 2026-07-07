//Matrix Traversal

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
temp.push_back(matrix[j][i]);

            }
            ans.push_back(temp);
            temp.clear();
        }
matrix=ans;  
  }
};