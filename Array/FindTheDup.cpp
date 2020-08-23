#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        
        int slow=0;
        int fast=slow;
        
        while(true)
        {
            
            slow=nums[slow];
            fast=nums[nums[fast]];
            
            if(slow==fast)
                break;
        }
        
        
        slow=0;
       
       cout<<"BREAK\n"; 
        
        
        while(true)
        {
            slow=nums[slow];
            fast=nums[fast];

            if(slow==fast)
                break;        
                
        }
        
        return slow;
        
    }
};




int main()
{

  vector<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(2);

    Solution x;

   auto y=x.findDuplicate(nums);

    cout<<y<<endl;

}