#include<bits/stdc++.h>

using namespace std;

int main()
{


    unordered_map<char,int> a;
    int x;
    
    for(int i=0;i<6;i++)
    {a.insert(make_pair((char)(i*i+64),i+1));
    }

    for(int i=0;i<6;i++)
        cout<<a[(char)(i*i+64)]<<" ";

    

    a.erase((char)65);
    cout<<endl;

    for(auto const& i:a)
        cout<<i.second<<" ";

}
