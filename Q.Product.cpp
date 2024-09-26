#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,m;
	cin>>l>>r>>m;
	long long int p = 1;
	for (int i=l;i<=r;i++)
	{
		p = (p*i)%m;
	}
	cout<<p<<endl;
	return 0;
}
