#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	double s = (a+b+c)/2.0;
	if (a+b>c && b+c>a && c+a>b)
	{
		cout<<"Valid"<<endl;
		cout<<fixed<<std::setprecision(6);
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<area<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
    return 0;
}
