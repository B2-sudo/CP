#include <bits/stdc++.h>

using namespace std;

bool comp(int a,int b)
{return a>b;
}
int main()
{
    char a[100001];
    cin>>a;

    int x=strlen(a);
    int set[26],k;
    for(int& i:set)
        i=0;

    for(int i=0;i<x;i++)
        set[a[i]-97]++;

    sort(set,set+26,comp);

    for(int i=0;i<26;i++)
        if(set[i])cout<<(char)(65+i)<<set[i]<<" ";

    cout<<endl;

    int changes=0;

    unordered_map<int,int> mem;

    mem.insert(make_pair(set[0],0));

    for(int i=1;i<26&&set[i]!=0&&changes<2;i++)
        {
            if(mem.find(set[i])==mem.end())
            {  mem.insert(make_pair(set[i]-1,0));
                     changes++;
            }

        }

     cout<<changes<<endl;

    (changes>1)?cout<<"NO":cout<<"YES";


    return 0;
}
