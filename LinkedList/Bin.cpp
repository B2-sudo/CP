#include<bits/stdc++.h>

using namespace std;


int main()
{   
    int n,q;
    cin>>q;

    vector<int> v;

    while(q--)
    {
        cin>>n;



        while(n)
            {
                v.insert(v.begin(),!(n%2));
                n/=2;
    
            }

        for(int i=1;i<=32-v.size();i++)
            cout<<1;

        for(auto itr=v.begin();itr!=v.end();itr++)
            cout<<*itr;



    }


return 1;

}

