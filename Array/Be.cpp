#include <bits/stdc++.h>
using namespace std;
set<vector<int>> ret;
int __max;
 
vector<int> binary(int n)
{
    vector<int> ret(2,0);
    while(n)
        {
            if (n%2==0)
            ret[1]++;
            else
            ret[0]++;
            n/=2;
        }
        ret[1]+=__max-(ret[0]+ret[1]);
    return ret;
}

void sets(vector<int>& val,vector< vector<int> >& mem,int x,int y,int i,vector<int>& ans)
    {
        if(i<0)
            {
                if(x==y&&x!=0)
                    ret.insert(ans);
                return;
            }
        if(x==y&&x!=0)
            ret.insert(ans);
        ans.push_back(val[i]);
        sets(val,mem,x+mem[i][0],y+mem[i][1],i-1,ans);
        ans.pop_back();
        sets(val,mem,x,y,i-1,ans);
        return ;
    }
int main() {
	int n;
	cin>>n;
    int  t=0,num;
    vector<int> val(n);
    vector< vector<int> > mem;
    __max=0;
    for(auto& i:val)
        {
            cin>>i;
            __max=max(i,__max);
        }
    int z=0;
    if(__max==0)
        z=1;
    while(__max)
        {   __max=__max/2;
            z++;
        }
    __max=z;
    for(auto i:val)
        mem.push_back(binary(i));    
    vector<int> ans;
    sets(val,mem,0,0,n-1,ans);
    int max_len=0;
    for(auto i:ret)
        {   
            int k=i.size();
            max_len=max(max_len,k);
        } 
    val.clear();
    int x=0;
    while(max_len)
        {
            if(max_len%2)
                val.push_back(1);
            else val.push_back(0);
            max_len/=2;
            x++;
        }
    while(x<__max)
        {
            val.push_back(0);
            x++;
        }
    reverse(val.begin(),val.end());
    for(auto i:val)
        cout<<i;
}