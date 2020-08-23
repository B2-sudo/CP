#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> mem={1,4,8,3,11,2,3,15};

    int k=7;

    int i=0,j=0,sum=0,count=0;

    while(i<mem.size()&&j<mem.size())
        {
            sum+=mem[i];

            if(sum<k)
                count+=i-j+1;
            else {

                while(sum>=k)
                    {
                        sum-=mem[j++];
                    }

                count+=i-j+1;

            }

            i++;
        

        }

        j++;


        while(j<mem.size())
        {
            if(sum<k)
                count+=i-j;
            
            sum-=mem[j++];

        }

        cout<<"COUNT:"<<count;







}