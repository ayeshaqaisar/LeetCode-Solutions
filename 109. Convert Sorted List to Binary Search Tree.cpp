/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    int length(ListNode* p){
        int c=0;
        while(p){
            p=p->next;
              c++;
        }
      
        return c;
    }
    
    int value(ListNode* p, int position ){
        while(position--){
            p=p->next;
        }
        return p->val;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n=length(head);
         if(n == 0) return NULL;
        
        return rec(head, 0,n-1);
    }
    
         TreeNode* rec(ListNode* head, int left, int right) {
         if(left > right){
             return NULL;
         }
         
         int mid = left + (right -left)/2;
         
         TreeNode* p = new TreeNode(value(head,mid ));
         p->left = rec(head, left, mid-1);
         p->right = rec(head,  mid+1, right);
         return p;
     }
};