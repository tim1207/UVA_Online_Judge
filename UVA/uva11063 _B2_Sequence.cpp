// uva11063 _B2_Sequence.cpp

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{	
	int n,i,t,c=1;
	
	while(cin>>n) 
	{
		vector<int> b; 
		set<int> d;
		d.clear(); 
		
		for(i=0;i<n;i++) 
		{
			int a;
			cin >>a;
			b.push_back(a);
		}
		
		for(i=0;i<n;i++) 
		{
			if(b[i]<1)
			{
				break;
			}
			if(b[i-1]>=b[i]&&i>0) 
			{							
				break;
			}
			for(t=i;t<n;t++) 
			{
				d.insert(b[i]+b[t]);
									
			}
		}
		
		if(d.size()==(n+1)*n/2) 
		{					   
			cout<<"Case #"<<c<<": It is a B2-Sequence.";
		}
		else
		{
			cout<<"Case #"<<c<<": It is not a B2-Sequence.";
		}
		
		cout<<endl<<endl; 
		c++;
	}
	return 0;
}