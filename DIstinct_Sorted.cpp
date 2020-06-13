#include<bits/stdc++.h>


using namespace std;

int main() {
    
    int t,n,x;
    
    cin>>t;
    
    while(t--)
    {cin>>n;
    
    unordered_map<int,int> mem;
    
    bool cond=true;
    
    for(int i=0;i<n;i++)
        {cin>>x;
        if(cond)
        {if(mem.find(x)==mem.end())
            mem.insert(make_pair(x,1));
        else cond=false;
        }
            
        }
    
    (cond)?cout<<"GIRLS\n":cout<<"BOYS\n";
    

    }
    
	return 0;
}