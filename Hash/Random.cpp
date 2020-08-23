#include<bits/stdc++.h>

using namespace std;

void randomPrint(int x)
{
    if(x==0)
    return;

    cout<<x-2;

    randomPrint(x-2);

    return;
    
}


int main()
{
    randomPrint(13);

return 1;

}
