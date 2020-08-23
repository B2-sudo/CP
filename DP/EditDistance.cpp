class Solution {
public:
    
    
    const int INF=1e9+5;
    
    
    int min(int a,int b)
    {
        return (a<b)?a:b;
        
    }
    
    
    
    int editDistance(string s,string t,int n,int m,vector< vector<int> > &dp)
    {
        if(n==0)
            return m;
        if(m==0)
            return n;
        
        if(dp[n][m])
            return dp[n][m];

        int x=0;
        
        if(s[n-1]!=t[m-1])
            x++;
            
        dp[n][m]=min(x+editDistance(s,t,n-1,m-1,dp),
                    1 + min(editDistance(s,t,n-1,m,dp),editDistance(s,t,n,m-1,dp)));
            
        return dp[n][m];
                
    }
    
    

    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
       
        vector< vector<int> > dp(n+1,vector<int>(m+1,0));
        
        
        return editDistance(word1,word2,n,m,dp);
        
        
    }
};