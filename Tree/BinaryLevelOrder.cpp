#include<bits/stdc++.h>


using namespace std;


int main()
{
    vector< vector<int> > v;


    vector<int> x;

    for(auto i=0;i<5;i++)
        x.push_back(i);

    vector<int> y;

    for(auto i=0;i<5;i++)
        y.push_back(i+10);

    v.push_back(x);
    v.push_back(y);


    for(int i=0;i<2;i++)
        {
            for(auto j=0;j<5;j++)
                cout<<v[i][j]<<" ";

            cout<<endl;


        }

}