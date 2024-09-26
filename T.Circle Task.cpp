#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int xc,yc,r;
	int n;
	cin>>xc>>yc>>r>>n;
	for (int i = 0; i<n; i++)
	{
		long long int x,y;
		cin>>x>>y;
		long long int distance = (xc - x) * (xc - x) + (yc - y) * (yc - y);
		if (distance<=(r*r))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
    return 0;
}
