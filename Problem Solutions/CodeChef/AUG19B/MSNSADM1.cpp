#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			a[i]=a[i]*20-b[i]*10;
		if(*max_element(a,a+n)>0)
			cout<<*max_element(a,a+n)<<'\n';
		else
			cout<<0<<'\n';
	}
}
		
