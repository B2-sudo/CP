#include<bits/stdc++.h>

using namespace std;


#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)

#define ll long long

const ll INF = 1e18+5;



int main()
{

    int _total,capacity;

    cin>>_total>>capacity;


    int sum_val=0;

    vector<int> val(_total),weight(_total);

    for(int i=0;i<_total;i++)
        {
            cin>>weight[i]>>val[i];
            sum_val+=val[i];

        }


    vector<ll> dp(sum_val+1,INF);//To Store The Minimum weight for that value

    dp[0]=0;    

    for(int i=0;i<_total;i++)
        {

            for(int _val=sum_val;_val>=val[i];_val--)
                dp[_val]=min(dp[_val],dp[_val-val[i]]+weight[i]);

        }

    ll ret=0;

    for(int i=0;i<sum_val+1;i++)
        if(dp[i]<=capacity)
            ret=max(ret,i);



    cout<<ret;

}