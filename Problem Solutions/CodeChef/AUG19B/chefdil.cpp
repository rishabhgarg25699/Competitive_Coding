#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int i , c , k,f=0;
		cin>>s;
		c=0;
		for(i=0;i<s.length();++i)
			if(s[i]=='1')
				c++;
		if(c%2!=0)
			cout<<"WIN\n";
		else
			cout<<"LOSE\n";
			
	}
}

