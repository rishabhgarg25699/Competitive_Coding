#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long n , k;
		cin>>n>>k;
		n/=k;
		if(n%k==0 )
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}		
