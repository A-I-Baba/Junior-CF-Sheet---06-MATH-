#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout<<fixed<<setprecision(9)<<distance<<endl;
    return 0;
}
