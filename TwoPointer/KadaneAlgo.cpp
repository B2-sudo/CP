class Solution {
public:
    int max(int a,int b)
    {
        
        return (a>b)?a:b;   
    
    }
    
    
    
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        int max_i,max_f;
        
        max_i=max_f=nums[0];
        
        
        for(int i=1;i<n;i++)
        {
            max_i=max(max_i+nums[i],nums[i]);
            
            max_f=max(max_i,max_f);
            
        }
        
        
        return max_f;
        
    }
};