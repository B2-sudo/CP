#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s="abc";

    cout<<(int)s[2];


    vector<int> v;

    v.push_back(1);
    v.push_back(2);

    cout<<*(v.end()-1)<<endl;
    v.erase(v.end()-1);
    for(auto i:v)
        cout<<i;


    cout<<endl<<s.length();




}