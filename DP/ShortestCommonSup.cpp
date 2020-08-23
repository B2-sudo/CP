class Solution {
public:
    
    int max(int a,int b)
    {
        return (a>b)?a:b;
    
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
        
        
        int n=str1.size(),m=str2.size();
        
        vector< vector<int> > dp(n+1,vector<int>(m+1,0));
        
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            if(str1[i-1]==str2[j-1])
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            
        }
        
        
        int x=dp[n][m];
        
        string alpha="";
        
        int i=n,j=m;
        
        while(i>0&&j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                alpha+=str1[i-1];
                i--;
                j--;
                
            }else if(dp[i-1][j]>dp[i][j-1])
                    i--;
            else j--;    
            
        }
        
        
        reverse(alpha.begin(),alpha.end());
        
        
        string ret="";
        
        int k=0,h=0,g=0;
        
        while(k<x&&h<n&&g<m)
        {
            if(str1[h]!=alpha[k])
            {
                ret+=str1[h];
                h++;
                
            }else if(str2[g]!=alpha[k])
            {
                ret+=str2[g];
                g++;
                
            }   else if(str1[h]==alpha[k])
            {
                while(str2[g]!=alpha[k]&&g<m)
                {
                    ret+=str2[g];
                    
                }
                
                ret+=str1[h];
                h++;
                k++;
                g++;
            }else {
                
                
                while(str1[h]!=alpha[k]&&h<m)
                {
                    ret+=str1[h];
                    
                }
                
                ret+=str2[g];
                g++;
                h++;
                k++;
            }
            
            
        }
        
        
           while(h<n)
            {
                ret+=str1[h];
                h++;
            }
            
            while(g<m)
            {
                ret+=str2[g];
                g++;
            }  
    
        
        return ret;
    
    
    
    }
};