#include<bits/stdc++.h>
 
using namespace std;
 

#define INF 10e9

int min(int a,int b)
{
 	return (a<b)?a:b; 
}
 
int main()
{
 	int n;
    cout<<INF;
  	cin>>n;
  
  	vector<int> v(n);
  	
  	for(auto& i:v)
  		cin>>i;
  
  	vector<int> dp(n);
  
  	dp[0]=0;
  	dp[1]=abs(v[1]-v[0]);
 
  	for(int i=2;i<n;i++)
    {	
    	dp[i]=min(abs(v[i]-v[i-1])+dp[i-1],abs(v[i]-v[i-2])+dp[i-2]);
    
    }  
  
  	cout<<dp[n-1];
  
  
  
  return 1;
}