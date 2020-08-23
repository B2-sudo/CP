#include<bits/stdc++.h>
using namespace std;




 
typedef  struct ListNode {
     int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  } ListNode;
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        auto h=head;
        auto k=head;
        auto i=head;
        auto head2=head;
        
        int a=-1;
        int b=-1;

        int c=0;


            
        while(i!=NULL)
            {   
                c++;

                
                if(i->val<x)
                {
                    if(a==-1)
                    {      
                        k=i;
                        head=k;
                        a=1;
                        
                     }else{ 
                        
                            k->next=i;
                            k=k->next;
                    
                          }       
                }else {
                    
                    if(b==-1)
                    { 
                        h=i;
                        head2=h;
                        b=1;
                
                    }else {
                        
                        

                        h->next=i;

                        

                        h=h->next;
                        
                    


                        }  
                }
                
            i=i->next;
            
            }
        
        if(k!=NULL&&a!=-1)
        k->next=NULL;
        if(h!=NULL&&b!=-1)
        h->next=NULL;



        if(a!=-1&&b!=-1)
        {
            k->next=head2;
        
        }else if(a!=-1)
            k->next=NULL;
        else if(b!=-1)
            head=head2;
        

        
        return head;
        
    }
};


int main()
{


    auto head=new ListNode(1);
    auto y=head;

    auto z=new ListNode(5);
    y->next=z;
    y=y->next;



    Solution x;



    head=x.partition(head,0);


while(head!=NULL)
 {   cout<<head->val<<" ";
  head=head->next;  
}
}




