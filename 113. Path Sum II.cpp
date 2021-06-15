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
    void dfs(TreeNode* root, int targetSum,vector<int> v,vector<vector<int>> &ans){
   
    if(root==NULL)return ;
        
    v.push_back(root->val);
        
    if(root->left==NULL && root->right==NULL && targetSum==root->val){
     
        ans.push_back(v);
        return ;
    }
  dfs(root->left, targetSum - root->val, v, ans);
  dfs(root->right, targetSum - root->val, v, ans);
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        vector <int> v;
        
        dfs(root, targetSum,v,ans);
        return ans;
    }
};