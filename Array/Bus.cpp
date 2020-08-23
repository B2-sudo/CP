#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int min1;
        int min2=min1=0;
        
        
        for(int i=start;i<destination;i++)
            min1+=distance[i];
        
        
        while(destination!=start)
        {
            cout<<destination<<endl;

            min2=distance[destination];
            (destination==distance.size())?destination=0:destination++;
           
            
        }


        cout<<min1<<" "<<min2<<endl;
        
        
        return (min1<min2)?min1:min2;
        
    }
    
    
    
};



int main()
{

    int a[]={8,11,6,7,10,11,2};

    vector<int> v(a,a+7);

    


    Solution x;

    auto y=x.distanceBetweenBusStops(v,0,3);

    cout<<y<<endl;    



}