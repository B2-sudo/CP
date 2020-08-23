#include<bits/stdc++.h>


using namespace std;

#define ll long long

#define max(a,b) ((a>b)?a:b)


vector< vector<ll> > dp(101,vector<ll>(101,0));


ll max_val(vector<int> cost,vector<int> val,int index,int max_weight)
    {
        if(index==0||max_weight<=0)
            return 0;

        if(dp[index][max_weight])
            return dp[index][max_weight];

        if(max_weight-cost[index-1]>=0)
        dp[index][max_weight]=val[index-1]+max_val(cost,val,index-1,max_weight-cost[index-1]);

        dp[index-1][max_weight]=max_val(cost,val,index-1,max_weight);



        return max(dp[index][max_weight],dp[index-1][max_weight]);



    }








int main()
{
    int n,w;

    cin>>n>>w;

    vector<int> cost(n),val(n);

    for(int i=0;i<n;i++)
        cin>>cost[i]>>val[i];

    cout<<max_val(cost,val,n,w);

}