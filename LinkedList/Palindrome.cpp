#include<bits/stdc++.h>
using namespace std;




 
typedef  struct ListNode {
     int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  } ListNode;


class Solution {
public:
    ListNode* isPalindrome(ListNode* head) {
        
        auto x=head;
        auto y=x->next;
        
        
        
        int size=1;
        
        
        bool odd=false;
        
        bool cond=true;
        
      while(y!=NULL)
      {
          
          if(y->next==NULL)
          {
              break;       
              
          }else if(y->next->next==NULL)
       {
                    odd=true;
                    break;


      }
          else {
                
                x=x->next;
                size++;
                
                y=y->next->next;
              
               }
        
          
          
      }


     cout<<x->val<<" "<<odd<<endl;   
      
      y=(odd)?x->next:x; 



      cout<<y->val<<endl;
        
      x=x->next;
      
      (odd)?x=x->next:x;
      
      auto start=x;  
           
      auto z=x->next;
        
      auto k=z;
      
      while(z!=NULL)
      {   
          k=z->next;
          z->next=x;
          start->next=k;
          x=z;
          z=start->next;

      }

      y->next=x;
        
        
        
       cout<<y->val<<endl;
        
        return head;
        
    }
};



int main()
{


    auto head=new ListNode(1);
    auto y=head;

    auto z=new ListNode(2);
    y->next=z;
    y=y->next;




    Solution x;



    head=x.isPalindrome(head);


while(head!=NULL)
 {   cout<<head->val<<" ";
  head=head->next;  
}
}