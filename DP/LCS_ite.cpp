#include<bits/stdc++.h>
 
 
using namespace std;
 
#define max(a,b) ((a>b)?a:b)


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    string s,t;



    getline(cin,s);
    getline(cin,t);
 
    int n=s.size(),m=t.size();

    vector< vector<int> > dp(n+1,vector<int>(m+1,0));
        
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                    dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
            
            
        }

int x=dp[n][m];

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

