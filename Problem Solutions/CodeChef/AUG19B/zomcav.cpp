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
		int n,x,y,j,i ;
		cin>>n;
		long c[n],h[n];
		for( i=0;i<n;++i)
			cin>>c[i];
		for( i=0;i<n;++i)
			cin>>h[i];
		int res[n]={0};
		for( i=0;i<n;++i)
		{
			x=i+1-c[i];
			y=i+1+c[i];
			x=x>0?x-1:0;
			y=y<=n?y-1:n-1;
			res[x]+=1;
			if(y+1<n)
			res[y+1]-=1;
		}
		for(i=1;i<n;++i)
			res[i]+=res[i-1];
		sort(res,res+n);
		sort(h,h+n);
		for( i=0;i<n;++i)
			if(res[i]!=h[i])
				break;
		if(i==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			
		
	}
}
			
		
