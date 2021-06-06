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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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
            
            
    
            if(r){
                reverse(row.begin(), row.end());
                r=0;
            }else{
            r=1;
            }
            ans.push_back(row);
        }
        
        
        return ans;
        
        
    }
};