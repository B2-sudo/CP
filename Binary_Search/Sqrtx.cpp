class Solution {
public:
    int mySqrt(int x) {
        
        int left=0,right=x,m;
        
        
        while(left<=right)
        {
            m=(left+right)/2;
            
            cout<<m<<endl;
            
            if(m*m==x||(m*m<x&&(m+1)*(m+1)>x))
                return m;
            if((m-1)*(m-1)<x&&m*m>x)
                return m-1;
            
            
            if(m*m>x)
                right=m-1;
            else left=m+1;
            
        }
        
        
        
        return 0;
        
        
        
        
    }
};