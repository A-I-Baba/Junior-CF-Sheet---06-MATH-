#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int x3,y3,x4,y4;
	cin>>x3>>y3>>x4>>y4;
	double slope1 =(double)(y2-y1)/(x2-x1);
	double slope2 =(double)(y4-y3)/(x4-x3);
	if (x2-x1==0 && x4-x3==0)
	{
		cout<<"YES"<<endl;
	}
	else if (x2-x1==0 || x4-x3==0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		if (slope1==slope2)
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
