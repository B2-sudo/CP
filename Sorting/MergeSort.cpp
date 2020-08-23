#include<bits/stdc++.h>

using namespace std;



int *_merge(int a[],int l,int r,int b[],int h,int k)
    {
        int ret[r-l+k-h+2];
        int i=l,j=h,t=0;

        while(i<=r&&j<=k)
            {
                while(i<=r&&a[i]<=b[j])
                {
                    ret[t++]=a[i++];
                
                }
              
                while(j<=k&&a[i]>b[j])
                {
                    ret[t++]=b[j++];
                
                }    



            }

        while(i<=r)
            ret[t++]=a[i++];
                
        while(j<=k)
            ret[t++]=b[j++];
                
        t=0;

        for(l;l<=k;l++)
            a[l]=ret[t++];

        return a;

    }



void _sort(int a[],int l,int r)
{
    if(l<r)
        {
            _sort(a,l,l+(r-l)/2);
            _sort(a,(l+(r-l)/2)+1,r);
            a=_merge(a,l,l+(r-l)/2,a,l+(r-l)/2+1,r);
        }

    return;

}








int main()
{

    int n,x;

    cin>>n;

    int a[n];

    for(int& i:a)
    {   
        x=rand()%101;
        i=x;
        cout<<x<<" ";
    }

    cout<<endl;

    _sort(a,0,n-1);

    for(auto i:a)
        cout<<i<<" ";

    return 1;

}
