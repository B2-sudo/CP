#include<bits/stdc++.h>


using namespace std;

int main() {
    
    int t,n,x,k,l;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
    
        unordered_map<int,int> mem;
        k=0;
        
        for(int i=0;i<n;i++)
            {cin>>x;
            
                if(mem.find(x)==mem.end()&&mem.find(-x)==mem.end())
                    {mem.insert(make_pair(x,i));
                        k++;
                    }
                
            }
        
        cout<<k<<endl;
        
    }
    
}    
    