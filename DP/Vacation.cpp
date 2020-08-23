#include<bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
    return (a>b)?a:b;
    
}


int main()
{
  int n;

    cin>>n;

    vector<int> dp(3,0);

    vector<int> hap(3);

  for(int i=0;i<n;i++)
{   
    vector<int> dp_init(3,0);

    for(int i=0;i<3;i++)
        cin>>hap[i];


    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                if(i!=j)
                dp_init[j]=max(dp_init[j],dp[i]+hap[j]);


        }    


      dp=dp_init;  


}



cout<<max(dp[0],max(dp[1],dp[2]));



}