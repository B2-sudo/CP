class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int i=n;
        
        auto h=nums.end()-1;
        auto k=h-1;
        
        for(h;h!=nums.begin();h--)
        {
            if(*h>*k)
                break;
            k--;
        }
        

        
        
        if(h==nums.begin())
        {
            sort(nums.begin(),nums.end());
        }else {
            int _max=100000;
            auto val=h;
            
            for(auto x=h;x!=nums.end();x++)
            {
                if(*x>*k&&*x<_max)
                {val=x;
                 _max=*x;                   
                }
            }
            
            iter_swap(val,k);
            
            sort(h,nums.end());
            
            
        }
        
        
        
        
       return; 
        
    }
};