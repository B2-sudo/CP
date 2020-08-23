#include<bits/stdc++.h>
 
 
using namespace std;
 
#define max(a,b) ((a>b)?a:b)
 
 
 
vector< vector<int> > dp(3001,vector<int>(3001,0));
 
 
int longestComSub(string s,string t,int n,int m)
{
    if(n==0||m==0)
        return 0;
 
    if(dp[n][m])
        return dp[n][m];
 
 
    if(s[n-1]==t[m-1])  
        dp[n][m]=1+longestComSub(s,t,n-1,m-1);
    else dp[n][m]=max(longestComSub(s,t,n,m-1),longestComSub(s,t,n-1,m));
 
    return dp[n][m];
 
 
}
 
 
 
 
 
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    string s,t;



    getline(cin,s);
    getline(cin,t);
 
    int n=s.size(),m=t.size();
 
    int x=longestComSub(s,t,n,m);
 
 
string alpha="";
 
while(m>0&&n>0)
    {
        if(s[n-1]==t[m-1])
            {
                alpha+=s[n-1];
                n--;
                m--;
 
            }
        else if(dp[n-1][m]>dp[n][m-1])
            n--;
        else m--;
    }
 
 
for(--x;x>-1;x--)
    cout<<alpha[x];
 
 
 
 
}