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
      int index = 0;
      
       TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0) return NULL;
       
        return rec(preorder,inorder, 0, preorder.size()-1);

        }
    
        int search( vector<int>& inorder, int left, int right,int key){
            for(int i=left;i<=right;i++){
                if(inorder[i] == key) return i;
            }
         return -1;
        }
       TreeNode* rec(vector<int>& preorder,vector<int>& inorder, int left, int right) {
         
           if(left > right){
              return NULL;
            }
           int v=preorder[index];
           int pos = search( inorder,left,right,v);
           index++;
         
           TreeNode* p = new TreeNode(inorder[pos]);
           p->left = rec(preorder,inorder, left, pos-1);
           p->right = rec(preorder,inorder,  pos+1, right);
    
         return p;
         
        }
};