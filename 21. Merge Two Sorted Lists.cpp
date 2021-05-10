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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        
        ListNode *p = new ListNode();
        p->val = INT_MIN;
        p->next = NULL;
          ListNode *q=p;  //q will point to the  starting of the sorted list
        
        while(l1 && l2){
            if(l1->val < l2->val){
                p->next=l1;
                l1=l1->next;
                
            }
            else{
                p->next=l2;
                l2=l2->next;
                
            }
            p=p->next;   
        }
        while(l1){
            p->next=l1;
            l1=l1->next;
            p=p->next;
        }
         while(l2){
            p->next=l2;
            l2=l2->next;
            p=p->next;
        }
        
        return q->next;
        
        
        
        
    }
};