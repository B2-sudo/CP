#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,od,_d;

    cin>>t;

    while(t--)
    {
        unordered_map<char,int> mem;

        char a[1000];

        cin>>a;
        cin>>od;
       _d=0;
       int j,k,prin_x,prin_y;
        k=j=0;
        int n=strlen(a);
        bool cond=false;
        for(int i=0;i<n;i++)
        {if(mem.find(a[i])==mem.end())
            {if(_d+1<=od)
                {   mem.insert(make_pair(a[i],1));
                    _d++;
                }else {
                       while(j!=i)
                       {mem[a[j]]-=1;
                        j++;
                       if(mem[a[j-1]]==0)
                            break;
                       } 

                        mem.clear();

                       for(int h=j;h<=i;h++)
                         {
                            if(mem.find(a[h])==mem.end())
                            {mem.insert(make_pair(a[h],1));_d++;}
                            else mem[a[h]]++;
                            
                         }       



                }



            }else mem[a[i]]++;

            if(i+1-j>k)
                {k=i+1-j;
                    prin_y=j;
                    prin_x=i;
                    if(_d==od)
                        cond=true;
                }

        }

        if(cond)
        for(int h=prin_y;h<=prin_x;h++)
            cout<<a[h];
        else cout<<"DOES NOT EXIST\n";



    }












}