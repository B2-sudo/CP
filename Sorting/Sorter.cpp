#include<bits/stdc++.h>

using namespace std;


bool compare(int a,int b)
	{
		
		string x=to_string(a);
		string y=to_string(b);
		
		if(x.compare(y)<0)
			return false;
			
		return true;
		
		
	}




int main()
{
	vector<int> v(10);
	
	for(int i=0;i<10;i++)
		v[i]=rand()%101;
	
	
	sort(v.begin(),v.end(),compare);
	
	
	for(int i=0;i<10;i++)
		cout<<v[i]<<endl;
	
	return 1;
	
}