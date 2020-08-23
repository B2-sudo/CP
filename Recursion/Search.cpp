#include<bits/stdc++.h>

using namespace std;

class Solution {
    int y;
    
public:
    int answer(vector< vector<int> > grid,int i,int j)
    {
        int val=grid[i][j];
        
        grid[i][j]=-1;
        
        cout<<i<<"*"<<j<<"*"<<y<<endl;
        
        int u=0,l=0,r=0,d=0;
   
        
        if(i-1>-1&&grid[i-1][j]>0)
            u=answer(grid,i-1,j);
        
        if(i+1<grid.size()&&grid[i+1][j]>0)
            d=answer(grid,i+1,j);
        
        if(j-1>-1&&grid[i][j-1]>0)
            l=answer(grid,i,j-1);
        
        if(j+1<grid[0].size()&&grid[i][j+1]>0)
            r=answer(grid,i,j+1);
        
     
        return val + max(u,max(l,max(d,r)));
        
        
    }
    
    
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
         vector < vector<int> > og=grid;
        
        y=0;
        
        int ret=0;
        
        for(int i=0;i<grid.size();i++)
    {   
            
            for(int j=0;j<grid[0].size();j++)
                {
                    ++y;
                
                    if(grid[i][j])
                    ret = max(ret,answer(og,i,j));  
                    
                    og=grid;
                    
                    
                }
        
    
     
    }
        
        
        return ret;
        
    }
};


int main()
{


   vector< vector<int> > v{{5,3,36,26,27},{11,31,23,30,4},{5,7,21,38,10},{39,30,10,17,13},{16,0,0,26,1},{25,0,10,0,0}};

    


    Solution x;

    auto y=x.getMaximumGold(v);

    cout<<y<<endl;    



}