#include<bits/stdc++.h>

using namespace std;

int main()
{


    multiset<int> a;
    int x;
    
    for(int i=0;i<20;i++)
    {x=rand()%10;
    cout<<x<<" ";
    a.insert(x);
    }


    cout<<endl<<a.size()<<"\n";

    auto itr1=a.begin();

    for(itr1;itr1!=a.end();itr1++)
        cout<<*itr1<<" ";

    x=rand()%10;

    int y=8;

    cout<<endl<<x<<" "<<y<<endl;

    itr1=a.find(x);
    auto itr2=a.find(y);


    for(itr1;itr1!=itr2;)
        a.erase(itr1++);
    
    a.erase(itr2);

    for(auto itr1=a.begin();itr1!=a.end();itr1++)
        cout<<*itr1<<" ";

    


}