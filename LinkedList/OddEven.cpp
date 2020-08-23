#include<bits/stdc++.h>
using namespace std;




 
typedef  struct ListNode {
     int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  } ListNode;






class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        
        
        auto h=head;
        auto k=head->next;
        auto x=k->next;
        auto y=x->next;


        auto al=head;
        
        
        while(x!=NULL)
        {   al=head;

            while(al!=NULL)
                {
                    cout<<al->val<<" ";
                    al=al->next;
                }




            cout<<endl<<h->val<<" "<<x->val<<" "<<k->val<<" "<<endl;
                al =h->next;
                h->next=x;
                k->next=y;
                x->next=al;
                h=x;
                k=y;
                if(y==NULL)
                    break;
                x=y->next;
                if(x==NULL)
                    break;
                y=x->next;
            
            
            
            
            
            
        }
        
        
        cout<<"HERE\n";
        
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

    z=new ListNode(3);
    y->next=z;
    y=y->next;




    cout<<&(head->val);

    Solution x;



    head=x.oddEvenList(head);


while(head!=NULL)
 {   cout<<head->val<<" ";
  head=head->next;  
}
}