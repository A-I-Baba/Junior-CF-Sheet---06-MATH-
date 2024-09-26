#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double factorial = 0;
    for (int i=2;i<=n;i++)
    {
    	factorial += log10(i);
    }
    int digits = floor(factorial) + 1;
    cout << "Number of digits of " << n << "! is " << digits << endl;
    return 0;
}
