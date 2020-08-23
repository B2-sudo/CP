/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;
#define min(a,b) ((a<b)?a:b)



int main(){

    int t;

    cin>>t;

    while(t--)
        {

            int n;

            cin>>n;

            vector<int> a(n);

            int negativeOne=0,positiveOne=0;

    for(auto& i:a)
        { 
            cin>>i;
            if(i<0)
                negativeOne++;
            else positiveOne++;

        }

    int changed=0;

        if(a[0]>0&&++changed&&positiveOne--)
            a[0]=-1;
        else negativeOne--;
            

        if(a[n-1]<0&&++changed&&negativeOne--)
            a[n-1]=1;
        else positiveOne--;


        cout<<positiveOne<<"//"<<negativeOne<<endl;

        int newpos=0,newneg=0,ans=n+1;


        int i=1;
        
        while(i<n-1&&a[i]<0)
            {
                i++;
            }


        for(;i<n-1;i++)
            {
                int h=0,k=0;
                
                if(a[i]<0)
                    k++;
                else h++;

                int x=positiveOne-newpos+k+newneg;
                int y=negativeOne-newneg+h+newpos;

                cout<<x<<"**"<<y<<endl;

                ans=min(x,y);
                if(a[i]<0)
                    newneg++;
                else newpos++;

            }
            

        cout<<changed+ans<<endl;

        }


}