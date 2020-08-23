#include<bits/stdc++.h>

using namespace std;


class Solution {
public:

    vector<int> pols(25,1);

    vector<int> nextGreaterElement(vector<int>& nums) {
        
        for(auto i:pols)
            cout<<i<<endl;


        vector<int> v;
        
        int n=nums.size();

        vector<int> ret(n,-1);
        
        for(int i=0;i<n;i++)
            {

                if(v.empty())
                    v.push_back(i);
                else {

                    while(!v.empty()&&nums[*(v.end()-1)]<nums[i])
                        {
                            ret[*(v.end()-1)]=nums[i];
                            v.pop_back();

                        }
 
                    v.push_back(i);

                }

            }

            for(int i=0;i<=*v.begin()&&!v.empty();i++)
                {
                    if(nums[*(v.end()-1)]<nums[i])
                    {       
                        ret[*(v.end()-1)]=nums[i];
                        i--;
                        v.pop_back();
                    } 

                }









            return ret;


    }
    
    
    };




    int main()
    {

        int n;
        cin>>n;

        vector<int> nums(n);

        for(auto& i:nums)
            i=rand()%1000;

        for(auto i:nums)
            cout<<i<<" ";

        cout<<endl;

        Solution s1;

        auto y=s1.nextGreaterElement(nums);

        for(auto i:y)
            cout<<i<<" ";



        return 1;


    }



