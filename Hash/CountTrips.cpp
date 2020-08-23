#include <bits/stdc++.h>

using namespace std;


int main()
{int n,r,k;

cin>>n>>r;

int a[n];

for(int& i:a)
    cin>>i;

sort(a,a+n);

unordered_map<int,int> mem;

int triplets=0;

for(int i=0;i<n;i++)
    {
        if(mem.find(a[i])==mem.end())
            {mem.insert(make_pair(a[i],1));

            k=i+1;

            while(k<n&&a[k]==a[i])
                {
                    mem[a[i]]++;
                    k++;
                }


            if(a[k]!=a[i])
                i=k-1;
            else i=n-1;


            }


        cout<<triplets<<" "<<a[i]<<endl;    

        if(mem.find(a[i]/r)!=mem.end()&&mem.find(a[i]/(r*r))!=mem.end())
            triplets+=mem[a[i]]*mem[a[i]/r]*mem[a[i]/(r*r)];

        


    }


cout<<triplets;

}
