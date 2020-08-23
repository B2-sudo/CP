#include<bits/stdc++.h>
 
using namespace std;
 
const int  INF = 1e9 ;

int min(int a,int b)
{
 	return (a<b)?a:b; 
}
 
int main()
{
 	int n,k;


  
  	cin>>n;
  
    cin>>k;

  	vector<int> v(n);
  	
  	for(auto& i:v)
  		cin>>i;
  
  	vector<int> dp(n,INF);
  
  	dp[0]=0;
 
  	for(int i=0;i<n;i++)
    {	
        for(int j=i+1;j<=i+k&&j<n;j++)
    	dp[j]=min(abs(v[j]-v[i])+dp[i],dp[j]);


          for(auto i:dp)
            cout<<i<<" ";

              cout<<endl;
    
    }  

  

  
  
  	cout<<dp[n-1];
 
}