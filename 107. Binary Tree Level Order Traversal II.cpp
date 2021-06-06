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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
            vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }
        
     
        queue<TreeNode*> q;
        
        q.push(root);

        bool r=0;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> row;
            for(int i=0;i<size;i++){
                TreeNode* p =q.front();
                q.pop();
                row.push_back(p->val);
                
                if(p->left) {
                    q.push(p->left);
                }
                
                if(p->right){
                    q.push(p->right);
                }
                
            }
            
            
    
            ans.push_back(row);
        }
         reverse(ans.begin(),ans.end());
        
        return ans;
    }
};