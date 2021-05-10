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

     
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        if(head==NULL || head->next==NULL || k<1){
          return head;
        }
        
        
       ListNode* r=head;
        int size=1;
        while(  r->next){
            ++size;
            r=r->next ;
        }
         r->next=head;
        
        k%=size;
        k= size - k;
        if( k==0 )
            return head;
       
        r->next=head;
       
      
        while(k-- >0){
            r=r->next;
        }
         head=r->next;
        r->next =NULL;
     
        
        
        return head;
    }
};