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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *current_node=head;
        while(current_node && current_node->next){
            if(current_node->val == current_node->next->val){
                current_node->next=current_node->next->next;  //skip the node
            }
            else{
                current_node=current_node->next;
            }     
        }
        
        return head;
    }
};