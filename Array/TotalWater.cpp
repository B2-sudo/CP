#include<bits/stdc++.h>


using namespace std;

#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)


class Solution{

public:




    int max_water(vector<int> nums)
    {

        int n=nums.size();

        vector<int> left(n),right(n);

        int lMax=nums[0],rMax=nums[n-1];

        left[0]=0;
        right[n-1]=0;

        for(int i=1;i<n;i++)
            left[i]=lMax=max(nums[i],lMax);
        

        for(int i=n-2;i>-1;i--)
            right[i]=rMax=max(nums[i],rMax);


        lMax=0;

        for(int i=0;i<n;i++)
            (left[i]!=0&&right[i]!=0)?lMax+=min(left[i],right[i])-nums[i]:lMax;



        return lMax;

    }

};



int main()
{
    vector<int> nums(5);

    for(auto i:nums)
        cin>>i;


    





}