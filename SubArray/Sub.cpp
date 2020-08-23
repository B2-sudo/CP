#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;

	cin>>t;
	
    while(t--)
	{
		string s,p;

		cin>>s>>p;

		int mem[26]={0},bar[26];
		for(auto i:s)
			mem[i-97]++;

        for(auto i:p)
			mem[i-97]--;	

		for(int i=0;i<26;i++)
		    bar[i]=mem[i];

        int t=p[0]-97;

        string ret="";
		
		for(int i=0;i<=t;i++)
		    while(mem[i]--)
				ret+=(char)(i+97);

		ret+=p;

        for(int i=0;i<26;i++)
            while(mem[i]-->0)
                ret+=(char)(i+97);


		string ret_2="";

		for(int i=0;i<p[0]-'a';i++)
			while(bar[i]!=0)
			{	ret_2+=(char)(i+97);
				bar[i]--;
			}

		ret_2+=p;

		for(int i=0;i<26;i++)
			while(bar[i]!=0)
			{
				ret_2+=(char)(i+97);
				bar[i]--;
			}

	
		cout<<min(ret,ret_2)<<"\n";

	}
    
}