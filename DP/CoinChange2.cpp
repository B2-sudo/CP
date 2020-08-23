#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        if(amount==0)
            return 1;
        
        cout<<"HERE\n";

        if(coins.size()==0&&amount==0)
            return 1;
        
        
        vector<int> dp(amount+1,0);
        
        sort(coins.begin(),coins.end());
        
        for(int i=0;i<coins.size();i++)
        {
            dp[coins[i]]++;

            for(int amount_have=coins[i]+1;amount_have<=amount;amount_have++)
                if(dp[amount_have-coins[i]]>0)
                    dp[amount_have]+=dp[amount_have-coins[i]];

   
     
        }   
        
        int x=-1;

        for(auto i:dp)
            cout<<++x<<" "<<i<<endl;
        
        cout<<"HER2\n";
        
        return dp[amount];
        
        
        
        
    }
};


int main()
{
    vector<int> coins(3);
    int amount;


    for(auto& i:coins)
        cin>>i;

    cout<<endl;
    cin>>amount;

    Solution A;

    auto c=A.change(amount,coins);


    cout<<c<<endl;






}