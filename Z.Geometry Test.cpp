#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int r,s;
	cin>>r>>s;
	int diameter = 2*r;
	double diagonal = s * sqrt(2);
	if (diagonal <= diameter)
	{
		cout<<"Circle"<<endl;
	}
	else if (r<=(s/2))
	{
		cout<<"Square"<<endl;
	}
	else
	{
		cout<<"Complex"<<endl;
	}
	return 0;
}
