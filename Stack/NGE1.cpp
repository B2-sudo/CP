#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
        
        int n=nums2.size();
    
        unordered_map<int,int> mem;
        
        for(int i=0;i<n;i++)
        {
            if(v.empty())
                v.push_back(nums2[i]);
            else {
                while(!v.empty()&&*(v.end()-1)<nums2[i])
                {   
                    mem[*(v.end()-1)]=nums2[i];
                    v.erase(v.end()-1);
                }
                
                v.push_back(nums2[i]);
                
            }
            
            
            
            mem.insert(make_pair(nums2[i],-1));
                        
        }
        
        
        
        
        for(int i=0;i<nums1.size();i++)
            nums1[i]=mem[nums1[i]];
    
        
        return nums1;
        
        
    }
};



int main()
{



}