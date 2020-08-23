#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    
    void swap(vector<int>& nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    
        return;
        
    }
    
    
    
    int part(vector<int>& nums,int l,int r)
    {   
        int theNum=nums[r],i=l-1;   
   
    for (int j=l;j<r;j++) 
        if (nums[j]<=theNum) 
        { 
            i++; 
            swap(nums,i,j); 
        } 

        swap(nums,i+1,r); 
        return i + 1; 
    
    }
    
    
    
    
    void quickSort(vector<int>& nums,int l,int r)
    {
        if(l<r)
        {
            auto k=part(nums,l,r);

            for(auto i:nums)
                cout<<i<<" ";

            cout<<endl;

            quickSort(nums,l,k-1);
            quickSort(nums,k+1,r);
            
        }
        
        
        return;
        
        
        
    }
    
    
    
    
    
    
    
    vector<int> sortArray(vector<int>& nums) {
        
        quickSort(nums,0,nums.size()-1);
        
        return nums;
        
        
        
    }
};




int main()
    {
        Solution k;


        int n;
        cin>>n;

        vector<int> nums(n);

        for(auto& i:nums)
            {
                int x=rand()%101;
                i=x;
                cout<<x<<" ";

            }

        cout<<endl;


        auto t=k.sortArray(nums);

        for(auto i:t)
            cout<<i<<" ";

        cout<<endl;
        

        return 1;


    }