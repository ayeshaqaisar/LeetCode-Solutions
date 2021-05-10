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
       ListNode *p=new ListNode(0,head);
       ListNode *q=p;
        
       while(head){
           if(head->next && head->val == head->next->val){
               while(head->next && head->val == head->next->val){
                   head=head->next;
               }
               q->next=head->next;
           }
           else{
               q=q->next;
           }
           head=head->next;
           
           
       } 
        
        return p->next;
    }
};