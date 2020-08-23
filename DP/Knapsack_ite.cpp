#include<bits/stdc++.h>


using namespace std;

#define ll long long

#define max(a,b) ((a>b)?a:b)


int main()
{
    int n,w;

    cin>>n>>w;

    int cost,val;

    vector<int> dp(w+1,0);


    for(int i=0;i<n;i++)
    {       
        cin>>cost>>val;

        for(int cost_i=w;cost_i>=cost;cost_i--)
            dp[cost_i]=max(dp[cost_i],dp[cost_i-cost]+val);


    }



    cout<<*max_element(dp.begin(),dp.end());

}