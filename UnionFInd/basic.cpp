#include<bits/stdc++.h>
using namespace std;


class node {

    public:
        int data;
        int rank;
        node* parent;
};

unordered_map<int,node*> mem;

node* create(int data)
    {
        node* temp=new node;

        temp->data=data;
        temp->rank=0;
        temp->parent=temp;

        mem[data]=temp;

        return temp;
    }

node* unionSearch(node* val)
    {
        if(val->parent!=val)
            return unionSearch(val->parent);
        return val;     
    }

node* unionFind(int data)
    {   
        node* toCheck=mem[data];
        return unionSearch(toCheck);
    }

void unio(int x,int y)
    {
        auto x_node=mem[x];
        auto y_node=mem[y];

        auto par_x=unionFind(x);
        auto par_y=unionFind(y);

            if(par_x->rank>par_y->rank)
                par_y->parent=par_x;
            else if(par_x->rank<par_y->rank)
                par_x->parent=par_y;
            else {
                par_y->parent=par_x;
                par_y->rank++;
            }

        return;

    }


int main()
{
    vector<node*> temp;
    
    for(int i=1;i<9;i++)
        temp.push_back(create(i));

    for(auto i:temp)
        cout<<i->data<<endl;

    for(int i=1;i<4;i++)
    {
        unio(i,i+1);

        cout<<i+1<<" "<<unionFind(i+1)->data<<endl;

    }
    

    for(int i=5;i<8;i++)
    {
        unio(i,i+1);

        cout<<i+1<<" "<<unionFind(i+1)->data<<endl;

    }


    unio(1,8);

     cout<<unionFind(8)->data;
   

    return 1;
}