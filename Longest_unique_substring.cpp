#include<bits/stdc++.h>

using namespace std;

#define max(a,b) ((a>b)?a:b)

int main()
{
    int t,sum_i,sum_f,j,k,n;

    cin>>t;
    char a[100];

    while(t--)
    {   
        cin>>a;
        j=sum_i=sum_f=0;
        unordered_map<char,int> mem;
        n=strlen(a);
        for(int i=0;i<n;i++)
            {
                if(mem.find(a[i])==mem.end())
                    {mem.insert(make_pair(a[i],i));
                        sum_i++;             
                    }
                else {
                    k=mem[a[i]];
                   for(j;j<k;j++)
                        mem.erase(a[j]);
                    
                    mem[a[j]]=i;

                    j++;

                    sum_i=i-k;

                }    

            sum_f=max(sum_i,sum_f);


            }

    cout<<sum_f<<endl;


    }

    






}