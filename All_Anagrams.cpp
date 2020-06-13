#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    int t;

    cin>>t;

    char a[100];
    char b[100];
    while(t--)
    {   cin>>a;
        cin>>b;
        int n,m,sum_p,sum_o,j,total;

        n=strlen(a);
        m=strlen(b);
        total=sum_p=sum_o=0;
        unordered_map<char,int> mem;
        unordered_map<char,int> window;

        for(int i=0;i<m;i++)
            {
                if(mem.find(b[i])==mem.end())mem.insert(make_pair(b[i],1));else mem[b[i]]++;
                sum_p+=(int)b[i]-96;
            }
        
        for(auto const& x:mem)
            cout<<x.first<<x.second<<" ";

        cout<<endl;
    j=0;
        for(int i=0;i<n;)
            {if(sum_o<sum_p)
                {
                if(window.find(a[i])==mem.end())window.insert(make_pair(a[i],1));else window[a[i]]++;
                sum_o+=((int)a[i]-96);
                i++;
                }else if(sum_o>sum_p&&!window.empty()&&j!=i)
                {   
                    window[a[j]]--;
                    if(window[a[j]]==0)
                        window.erase(a[j]);
                    sum_o-=((int)a[j++]-96);
                }else {
                    bool cond=true;

                    for(auto const& x:mem)
                        {if(window.find(x.first)==window.end())
                            {
                                cond=false;
                                break;
                            } 
                                     

                        }

                        if(cond)
                        total++;    
                        
                        window.erase(a[j++]);  
                        sum_o-=((int)(a[j-1])-96);

                }

        for(auto const& x:window)
            cout<<x.first<<x.second<<" ";

          cout<<"TOTAL:"<<total<<" INDEX:"<<i<<" SUM:"<<sum_o<<endl;  

            }


        bool cond=true;

                    for(auto const& x:mem)
                        {if(window.find(x.first)==window.end())
                            {
                                cond=false;
                                break;
                            } 
                                     

                        }

                        if(cond)
                        total++;   

        cout<<total<<endl;


    }



}