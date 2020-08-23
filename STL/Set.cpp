#include<bits/stdc++.h>

using namespace std;

int main()
{


    set<int> a;
    int x;
    
    for(int i=0;i<20;i++)
    {x=rand()%10;
    cout<<x<<" ";
    a.insert(x);
    }

    cout<<endl;

    set<int> ::iterator itr=a.begin();
    for(itr;itr!=a.end();itr++)
        cout<<*itr<<" ";

        cout<<endl;


    a.erase(100);

    a.insert(20);

    a.insert(2);
    a.erase(5);
    itr=a.begin();
    for(itr;itr!=a.end();itr++)
        cout<<*itr<<" ";

        cout<<endl;
    
    
    itr=a.find(7);
    cout<<*itr<<endl;
    for(itr;itr!=a.end();)
      a.erase(itr++);

    for(itr=a.begin();itr!=a.end();itr++)
        cout<<*itr<<" ";


}