#include<bits/stdc++.h>


using namespace std;

int main()
{
queue<int> q;

if(q.empty())
    cout<<"EMPTY\n";

for(int i=0;i<7;i++)
    q.push((i+1)*(i+1));

cout<<q.size()<<"\n";


q.pop();

while(!q.empty()&&cout<<q.front()<<" ")
{
    q.pop();
}




}