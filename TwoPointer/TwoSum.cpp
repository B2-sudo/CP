class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
            int n=nums.size();
        
        unordered_map<int,int> mem;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(mem.find(target-nums[i])==mem.end())
            {
                mem.insert(make_pair(nums[i],i));
                
            }else {
                v.push_back(mem[target-nums[i]]);
                v.push_back(i);
                break;
            }

        }
        
        
        
        return v;
        
        
    }
};