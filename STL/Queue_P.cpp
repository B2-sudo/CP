#include<bits/stdc++.h>


using namespace std;

int main()
{
    priority_queue<int> extractor;

    int x;
    for(int i=0;i<10;i++)
    {x=rand()%101;
        cout<<x<<" ";
    extractor.push(x);
    }

    cout<<endl<<"SIZE OF THIS IS:"<<extractor.size()<<endl;

    cout<<extractor.top()<<endl;

    extractor.push(3000);

    cout<<extractor.top()<<endl;

    extractor.pop();

    extractor.emplace(1);
    cout<<extractor.top()<<endl;
    extractor.pop();
    cout<<extractor.top();
    




}