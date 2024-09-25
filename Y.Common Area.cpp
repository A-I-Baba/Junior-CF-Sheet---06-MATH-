#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	for (int T = 1;T<=t;T++)
	{
		int n;
		cin>>n;
		int x1,y1,x2,y2;
		int c_x1 = -1e4,c_y1 = -1e4;
		int c_x2 = 1e4,c_y2 = 1e4;
		for (int i=0;i<n;i++)
		{
			cin>>x1>>y1>>x2>>y2;
			c_x1 = max(c_x1,x1);
			c_x2 = min(c_x2,x2);
			c_y1 = max(c_y1,y1);
			c_y2 = min(c_y2,y2);
		}
		int width = max(0, c_x2-c_x1);
		int height = max(0, c_y2-c_y1);
		int c_area = width * height;
		cout<<"Case #"<<T<<": "<<c_area<<endl;
	}
	return 0;
}
