#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;

	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

	int x1_min,x1_max,y1_min,y1_max;

	x1_min = min(min(x1,x2),min(x3,x4));

	y1_min = min(min(y1,y2),min(y3,y4));

	x1_max = max(max(x1,x2),max(x3,x4));

	y1_max = max(max(y1,y2),max(y3,y4));

	int n;

	cin>>n;

	for (int i = 0; i < n; i++)
	{
		int new_x1,new_y1;

		cin>>new_x1>>new_y1;

		if (x1_min<=new_x1 && x1_max>=new_x1)
		{
			if (y1_min<=new_y1 && y1_max>=new_y1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
