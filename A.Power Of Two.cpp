#include<bits/stdc++.h>
using namespace std;
int main ()
{
        long long int n;
        cin>>n;
        if (n<=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            double value = log2(n);
            if (floor(value)==value)
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
