#include<bits/stdc++.h>

using namespace std;

#define max(a,b) ((a>b)?a:b)

int main()
{
    int t,n,h,count,k,ex,_size,l_count,r_count,net,sum,index;

    cin>>t;

    while(t--)
    {
        cin>>n;
        vector<int> v;
        cin>>h;
        ex=h;
        count=1;
        net=0;

        for(int i=1;i<n;i++)
            {cin>>k;

              if(k==h)
                count++;
              else {
                  v.push_back(count);
                  h=k;
                  count=1;  

              }    


            }

        if(count)v.push_back(count);

        cin>>k;

        _size=v.size();

if(ex)
l_count=1;
else l_count=0;

r_count=0;

      for(int i=0;i<_size;i++)
        {
            
            if(ex==1)
            {sum+=v[i];
            continue;
            }
            
            
            
                
        

            ex=1;

            cout<<i<<" "<<h<<endl;
            net=max(net,h);

        }


        cout<<endl<<net<<endl;


    }






}