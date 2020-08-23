#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
        {

            string s,p;

            cin>>s>>p;

            if(s.size()==p.size())
                {
                    cout<<p<<endl;
                    continue;

                }

            string temp=p;

            sort(temp.begin(),temp.end());

            int mem[26]={0};

            for(auto i:s)
                mem[i-97]++;
            
            for(auto i:p)
                mem[i-97]--;


            int t=temp[0];

            string ret="";

            for(int i=0;i<=t;i++)
                    while(mem[i]--)
                        ret+=(char)i+97;

                

            ret+=p;

            for(int i=t+1;i<26;i++)
                    while(mem[i]--)
                        ret+=(char)i+97;

            cout<<ret<<endl;






        }



}