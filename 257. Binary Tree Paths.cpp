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
    void find(TreeNode* root, string s,vector<string> &ans){
        
        if(root==NULL) return;
        s=s+"->"+ to_string(root->val);
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s.substr(2));
            return;
        }
            
        find( root->left, s, ans);
        find( root->right, s, ans);
                   


        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
            vector<string> ans;
             string s="";
        
        find( root, s, ans);
        return ans;
    }
};