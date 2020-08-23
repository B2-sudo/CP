/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0,sum=0;
        auto X=new ListNode(0);
        
        auto ret=X;
        
    
        
        while(l1!=NULL&&l2!=NULL)
        {auto Y=new ListNode(0);
         Y->next=NULL;
        sum=carry+l1->val+l2->val;
         Y->val=(sum)%10;
         carry=sum/10;
         X->next=Y;
         X=X->next;
         l1=l1->next;
         l2=l2->next;
        }
         
        if(l1==NULL&&l2==NULL&&carry)
        {
            auto Y=new ListNode(carry);
            X->next=Y;
            
        }
        else {ListNode* alpha=(l1==NULL)?l2:l1;
              ListNode* beta=(l1!=NULL)?l1:l2; 
              
              while(alpha!=NULL)
              {auto Y=new ListNode(0);
               Y->next=NULL;
               sum=carry+alpha->val;
               Y->val=(sum)%10;
               carry=sum/10;
               X->next=Y;
               X=X->next;
               alpha=alpha->next;   
              }
              
              if(carry)
              {
                auto Y=new ListNode(carry);
                X->next=Y;
                
              }
              
             }
        
        return ret->next;
    }
};