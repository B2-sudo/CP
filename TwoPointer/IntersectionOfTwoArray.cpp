class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        
        unordered_map<int,int> mem;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(mem.find(nums1[i])==mem.end())
                mem.insert(make_pair(nums1[i],1));
            else mem[nums1[i]]++;
        } 
        
        
            for(int i=0;i<m;i++)
        {
            if(mem.find(nums2[i])!=mem.end()&&mem[nums2[i]]>0)
            {   
                
                mem[nums2[i]]--;
                   v.push_back(nums2[i]); 
                
            }
        
    }
        
     return v;   
        
}
    
};