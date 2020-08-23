#include<bits/stdc++.h>

using namespace std;

#define max(a,b) ((a>b)?a:b)

int main()
{
    string s;
    cin>>s;
   
    int n=s.size();

    int dp[n][n];

    memset(dp,0,sizeof(dp[0][0])*n*n);


    for(int i=0;i<n;i++)
        dp[i][i]=1;

    for(int j=1;j<n;j++)
        for(int i=j-1;i>-1;i--)
            dp[i][j]=(s[i]==s[j])?2+dp[i+1][j-1]:max(dp[i+1][j],dp[i][j-1]);

    cout<<dp[0][n-1];

    return 1;


}