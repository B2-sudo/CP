#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
    int bin_search(vector<int> v,int l,int r,int x)
    {
        cout<<l<<" "<<r<<endl;

        if(l>r||r<0)
            return -1;
            
        int m=(l+r)/2;
        
        
        if(v[m]==x)
            return m;
        
        if(v[m]>x)
            return bin_search(v,l,m-1,x);
        else if(v[m]<x)
            return bin_search(v,m+1,r,x);
        
        return -1;
        
        
    }
        
    
    
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        
                
        int n=nums.size();
    
        
        
        

        vector<int> v(nums.begin(),nums.end());
        
        sort(v.begin(),v.end());

        
        vector<int> net(n);
        
        net[0]=0;
        
        for(int i=1;i<n;i++)
        {
            
            if(v[i-1]==v[i])
                net[i]=net[i-1];
            else net[i]=i;

            
        }
        
        
        
        for(int& i:v)
        {
            nums[i]=net[bin_search(v,0,n,i)];
        
        }
        
        
        
        return nums;
        
        
        
        
    }
};



int main()
{


    vector<int> nums;

    nums.push_back(8);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);



    Solution x;



   auto y=x.smallerNumbersThanCurrent(nums);

    for(int& i:y)
        cout<<i<<" "; 

}
